import ply.lex as lex
import ply.yacc as yacc
import ast
import llvm.core
import llvm.ee
import sys
import os

tokens = (
    'NUMBER',
    'IF',
    'ELIF',
    'ELSE',
    'RETURN',
    'LOOP',
    'WHILE',
    'BREAK',
    'LPAREN',
    'RPAREN',
    'ASSIGN',
    'LBRACE',
    'RBRACE',
    'SEMICOLON',
    'PLUS',
    'MINUS',
    'TIMES',
    'DIVIDE',
    'INT',
    'FLOAT',
    'STRING',
    'VOID',
    'COMMA',
    'ISEQUAL',
    'LESSTHAN',
    'MORETHAN',
    'IDENTIFIER'
)

t_LPAREN = r'\('
t_RPAREN = r'\)'
t_ASSIGN = r'='
t_LBRACE = r'\{'
t_RBRACE = r'\}'
t_SEMICOLON = ';'
t_PLUS = r'\+'
t_MINUS = r'\-'
t_TIMES = r'\*'
t_DIVIDE = r'\/'
t_COMMA = ','
t_ISEQUAL = '=='
t_LESSTHAN = '<'
t_MORETHAN = '>'
literals = r'+-*/^~!(){}=[]\|;'


reserved = {
    'if' : 'IF',
    'elif' : 'ELIF',
    'else' : 'ELSE',
    'return' : 'RETURN',
    'int' : 'INT',
    'float' : 'FLOAT', 
    'void' : 'VOID',
    'string' : 'STRING',
    'loop' : 'LOOP',
    'while' : 'WHILE',
    'break' : 'BREAK'    
}

def t_IDENTIFIER(t):
    '[a-zA-Z_][a-zA-Z_0-9]*'
    t.type = reserved.get(t.value, 'IDENTIFIER')
    return t

def t_NUMBER(t):
    r'\d+'
    intval = int(t.value)
    t.value = ast.ConstantIntegerNode(intval, t.lineno)
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += len(t.value)

t_ignore = ' \t\r'

#Error Handling
def t_error(t):
    print "Illegal character '%s'" % t.value[0]
    t.lexer.skip(1)

lexer = lex.lex()

def p_toplevelgroup_funcdecl(t):
    'toplevelgroup : funcdecl toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_funcdef(t):
    'toplevelgroup : funcdef toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_vardecl(t):
    'toplevelgroup : globalvardecl toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_empty(t):
    'toplevelgroup : empty'
    t[0] = []

def p_funcdecl(t):
  'funcdecl : type IDENTIFIER LPAREN argdecllist RPAREN SEMICOLON'
  typename = t[1]
  funcname = t[2]
  argdecllist = t[4]
  
  t[0] = ast.FuncDeclNode(typename, funcname, argdecllist, t.lexer.lineno)

def makeType(typestr):
    if typestr == 'int':
        return llvm.core.Type.int()
    if typestr == 'void':
        return llvm.core.Type.void()
    print "making unknown type:",typestr
    raise ValueError

def makeProto(retTypeName, funcName, argDeclList):
  argDecls = []
  if argDeclList:
      for arg in argDeclList:
          print "considering arg:",arg

  proto = llvm.core.Type.function(makeType(retTypeName), argDecls)
  return proto
  
def p_funcdef(t):
  'funcdef : type IDENTIFIER LPAREN argdecllist RPAREN LBRACE statementlist RBRACE'
  typename = t[1]
  funcname = t[2]
  argdecllist = t[4]
  statementlist = t[7]

  proto = ast.FuncDeclNode(typename, funcname, argdecllist, t.lexer.lineno)
  funcDefNode = ast.FuncDefNode(proto, funcname, statementlist, t.lexer.lineno)
  t[0] = funcDefNode

def p_type(t):
  '''type : INT
          | FLOAT
          | STRING
          | VOID
          | IDENTIFIER'''
  t[0] = t[1]
  #print 'type:',t[0]

def p_argdecllist_empty(t):
    '''argdecllist : empty'''
    pass

def p_argdecllist_one(t):
    '''argdecllist : argdecl'''
    t[0] = [t[1]]

def p_argdecllist_many(t):
    '''argdecllist : argdecl COMMA argdecllist'''
    t[0] = [t[1]] + t[3]

def p_argdecl(t):
    '''argdecl : type IDENTIFIER'''
    t[0] = ast.argDeclNode(t[1], t[2])

def p_empty(t):
    'empty :'
    pass

def p_arglist_empty(t):
    'arglist : empty'
    pass

def p_arglist_single(t):
    'arglist : expression'
    t[0] = [t[1]]

def p_arglist_many(t):
    'arglist : expression COMMA arglist'
    t[0] = [t[1]] + t[3]

def p_globalvardecl(t):
    '''globalvardecl : type IDENTIFIER SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lineno, t[1], t[2])

def p_statementlist_empty(t):
    'statementlist : empty'
    t[0] = ast.StatementList([])

def p_statementlist_bootstrap(t):
    'statementlist : statement statementlist'
    if t[2] is None:
        t[0] = ast.StatementList([t[1]])
        return
    t[0] = ast.StatementList([t[1]] + t[2].statements)

def p_statement_expression(t):
    '''statement : expression SEMICOLON'''
    t[0] = t[1]

def p_statement_ifelse(t):
    '''statement : ifelse'''
    t[0] = t[1]

def p_statement_return(t):
    '''statement : RETURN expression SEMICOLON'''
    t[0] = ast.ReturnStatement(t[2])

def p_statement_loop(t):
    '''statement : LOOP LBRACE statementlist RBRACE'''
    t[0] = ast.LoopStatement(t[3])

def p_statement_break(t):
    '''statement : BREAK SEMICOLON'''
    t[0] = ast.BreakStatement()

def p_statement_while_loop(t):
    '''statement : WHILE LPAREN expression RPAREN LBRACE statementlist RBRACE'''
    t[0] = ast.WhileLoop(t[3], t[6])

def p_statement_assign(t):
    '''statement : IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.AssignStatement(t.lineno, t[1], t[3])

def p_expression_functioncall(t):
    '''expression : IDENTIFIER LPAREN arglist RPAREN'''
    t[0] = ast.FunctionCall(t[1], t[3])

def p_expression_binaryop(t):
    '''expression : expression compare expression
                  | expression arithop expression'''
    node = ast.BinaryExprNode(t[1], t[3], t.lineno, t[2])
    t[0] = node

def p_expression_variable(t):
    '''expression : IDENTIFIER'''
    # rvalue
    t[0] = ast.RValueVar(t[1], t.lineno)

def p_expression_number(t):
    '''expression : NUMBER'''
    t[0] = t[1]

def p_compare(t):
    '''compare : ISEQUAL
               | LESSTHAN
               | MORETHAN'''
    t[0] = t[1]

def p_arithop(t):
    '''arithop : PLUS
               | MINUS
               | TIMES
               | DIVIDE'''

    t[0] = t[1]

def p_elifgroup_empty(t):
    '''elifgroup : empty'''
    t[0] = []

def p_elifgroup_many(t):
    '''elifgroup : ELIF LPAREN expression RPAREN LBRACE statementlist RBRACE elifgroup'''
    t[0] = [(t[3], t[6])] + t[8]

def p_optelse_empty(t):
    '''optelse : empty'''
    t[0] = []

def p_optelse_single(t):
    '''optelse : ELSE LBRACE statementlist RBRACE'''
    t[0] = t[3]

def p_ifelse_if(t):
    '''ifelse : IF LPAREN expression RPAREN LBRACE statementlist RBRACE elifgroup optelse'''
    #t[0] = ['if', t[3], 'then', t[6], 'elif', t[8], 'else', t[9]]
    t[0] = ast.IfElse(t[3], t[6], t[8], t[9])

def p_error(t):
    print("Syntax error at %s" % t.value)
    print t

yacc.yacc(start = 'toplevelgroup')

def load_file(filename):
    f = open(filename)
    return f.read()

def makeObj(name, mainFunc):
    objFile = open(name, 'wb')
    obj = ast.gLlvmModule.to_native_object(objFile)
    objFile.close()

def compile(filename, basename, outname):
    sourcecode = load_file(filename)
    ast.gLlvmModule = llvm.core.Module.new(basename)
    lexer.input(sourcecode)

    # Tokenize
    while True:
        tok = lexer.token()
        if not tok:
            break
        #print tok

    print "parsing:"
    #for linenum, line in enumerate(sourcecode.split('\n')):
    #    print "%03d : %s " % (linenum+1, line)

    tree = yacc.parse(sourcecode)

    topLevelObjs = []

    print "about to generate code"
    if tree:
        for tlt in tree:
            print "making decl for",tlt.name
            tlt.generateDecl()
        for tlt in tree:
            obj = tlt.generateCode()
            if not (obj is None):
                topLevelObjs.append(obj)
            print
    
    for tlo in topLevelObjs:
        print "tlo:",tlo.name

    makeObj(outname, None)
    """
    for tlo in topLevelObjs:
        print "visiting",tlo.name
        #print tlo.name
        #print tlo
        if True or tlo.name == 'main':
            print "making object for",tlo.name
            objname = outname
            makeObj(objname, tlo)
            break
    """

def make_module_name(filename):
    path, basename = os.path.split(filename)
    root, ext = os.path.splitext(basename)
    return root+"_module"

def make_obj_filename(module_name):
    return module_name + '.o'

if __name__ == '__main__':
    if len(sys.argv) <2 or len(sys.argv) > 3:
        print_usage()
        sys.exit(-1)
    input_filename = sys.argv[1]
    module_name = make_module_name(input_filename)
    if len(sys.argv) == 2:
        obj_filename = make_obj_filename(module_name)
    else:
        obj_filename = sys.argv[2]
    compile(input_filename, module_name, obj_filename)
