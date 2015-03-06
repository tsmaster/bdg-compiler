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
    'LBRACKET',
    'RBRACKET',
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
    'LOGICAND',
    'LOGICOR',
    'ISEQUAL',
    'NOTEQUAL',
    'LESSTHAN',
    'GREATERTHAN',
    'LESSEQUAL',
    'GREATEREQUAL',
    'CONST',
    'STATIC',
    'CLASS',
    'IDENTIFIER',
    'DOT',
)

t_LPAREN = r'\('
t_RPAREN = r'\)'
t_ASSIGN = r'='
t_LBRACE = r'\{'
t_RBRACE = r'\}'
t_LBRACKET = r'\['
t_RBRACKET = r'\]'
t_SEMICOLON = ';'
t_PLUS = r'\+'
t_MINUS = r'\-'
t_TIMES = r'\*'
t_DIVIDE = r'\/'
t_COMMA = ','
t_LOGICAND = r'\&\&'
t_LOGICOR = r'\|\|'
t_ISEQUAL = '=='
t_NOTEQUAL = '!='
t_LESSTHAN = '<'
t_GREATERTHAN = '>'
t_LESSEQUAL = '<='
t_GREATEREQUAL = '>='
t_DOT = r'\.'
literals = r'+-*/^~!(){}=[]\|;'

def t_COMMENT(t):
    r'\#.*'
    pass
    # No return value. Token discarded


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
    'break' : 'BREAK',
    'const' : 'CONST',
    'static' : 'STATIC',
    'class' : 'CLASS',
}

def t_IDENTIFIER(t):
    '[a-zA-Z_][a-zA-Z_0-9]*'
    t.type = reserved.get(t.value, 'IDENTIFIER')
    return t

def t_NUMBER(t):
    r'\d*\.?[0-9]+'
    if '.' in t.value:
        floatval = float(t.value)
        t.value = ast.ConstantFloatNode(floatval, t.lineno)
    else:
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
    print "line:", t.lineno
    t.lexer.skip(1)

lexer = lex.lex()

precedence = (
    ('left', 'ISEQUAL', 'NOTEQUAL', 'LESSTHAN', 'GREATERTHAN', 'LESSEQUAL', 'GREATEREQUAL'),
    ('left','PLUS','MINUS'),
    ('left','TIMES','DIVIDE'),
    ('right','UMINUS'),
    )

# TODO collapse?

def p_toplevelgroup_funcdecl(t):
    'toplevelgroup : funcdecl toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_funcdef(t):
    'toplevelgroup : funcdef toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_vardecl(t):
    'toplevelgroup : globalvardecl toplevelgroup'
    t[0] = [t[1]] + t[2]

def p_toplevelgroup_classdecl(t):
    'toplevelgroup : classdecl toplevelgroup'
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

def p_memberlist_decl(t):
    'memberlist : memberdecl memberlist'
    t[0] = [t[1]] + t[2]

def p_memberlist_empty(t):
    'memberlist : empty'
    t[0] = []

def p_memberdecl(t):
    'memberdecl : type IDENTIFIER SEMICOLON'
    t[0] = ast.MemberDecl(t.lineno, t[1], t[2])

def p_classdecl(t):
    'classdecl : CLASS IDENTIFIER LBRACE memberlist RBRACE'
    t[0] = ast.ClassDecl(t.lineno, t[2], t[4])

def p_globalvardecl_var(t):
    '''globalvardecl : type IDENTIFIER SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lineno, None, t[1], t[2], None)

def p_globalvardecl_constinitialized(t):
    '''globalvardecl : CONST type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lineno, t[1], t[2], t[3], t[5])

def p_globalvardecl_varinitialized(t):
    '''globalvardecl : type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lineno, None, t[1], t[2], t[4])

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
    '''statement : RETURN castexpression SEMICOLON'''
    t[0] = ast.ReturnStatement(t[2])

def p_statement_emptyreturn(t):
    '''statement : RETURN SEMICOLON'''
    t[0] = ast.ReturnStatement(None)

def p_statement_localvardecl(t):
    '''statement : type IDENTIFIER SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lineno, None, t[1], t[2], None)

def p_statement_localvardecl_initialized(t):
    '''statement : type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lineno, None, t[1], t[2], t[4])

def p_statement_localvardecl_constinitialized(t):
    '''statement : CONST type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lineno, t[1], t[2], t[3], t[5])

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
    '''statement : unaryexpression ASSIGN castexpression SEMICOLON'''
    t[0] = ast.AssignStatement(t.lineno, t[1], t[3])

def p_primaryexpression_variable(t):
    '''primaryexpression : IDENTIFIER'''
    t[0] = ast.VarLookup(t[1], t.lineno)

def p_primaryexpression_number(t):
    '''primaryexpression : NUMBER'''
    t[0] = t[1]

def p_primaryexpression_parens(t):
    '''primaryexpression : LPAREN expression RPAREN'''
    t[0] = t[2]

def p_postfixexpression_primaryexpression(t):
    '''postfixexpression : primaryexpression'''
    t[0] = t[1]

def p_postfixexpression_arrayref(t):
    '''postfixexpression : expression LBRACKET expression RBRACKET'''
    t[0] = ast.ArrayRef(t[1], t[3])

def p_postfixexpression_emptyfunctioncall(t):
    '''postfixexpression : expression LPAREN RPAREN'''
    t[0] = ast.FunctionCall(t[1], None)

def p_postfixexpression_functioncall(t):
    '''postfixexpression : expression LPAREN arglist RPAREN'''
    t[0] = ast.FunctionCall(t.lineno, t[1], t[3])

def p_postfixexpression_memberref(t):
    '''postfixexpression : castexpression DOT IDENTIFIER'''
    t[0] = ast.MemberRef(t.lineno, t[1], t[3])

def p_unaryexpression_postfix(t):
    '''unaryexpression : postfixexpression'''
    t[0] = t[1]

def p_castexpression_unary(t):
    '''castexpression : unaryexpression'''
    t[0] = t[1]

def p_castexpression_cast(t):
    '''castexpression : LPAREN IDENTIFIER RPAREN castexpression'''
    t[0] = ast.CastExpr(t.lineno, t[2], t[4])

def p_expression_binaryop(t):
    '''expression : castexpression ISEQUAL castexpression
                  | castexpression NOTEQUAL castexpression
                  | castexpression LESSTHAN castexpression
                  | castexpression GREATERTHAN castexpression
                  | castexpression LESSEQUAL castexpression
                  | castexpression GREATEREQUAL castexpression
                  | castexpression LOGICAND castexpression
                  | castexpression LOGICOR castexpression
                  | castexpression PLUS castexpression
                  | castexpression MINUS castexpression
                  | castexpression TIMES castexpression
                  | castexpression DIVIDE castexpression'''
    node = ast.BinaryExprNode(t[1], t[3], t.lineno, t[2])
    t[0] = node

def p_expression_negop(t):
    '''expression : MINUS expression %prec UMINUS'''
    t[0] = ast.NegativeExprNode(t.lineno, t[2])

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
    '''ifelse : IF LPAREN castexpression RPAREN LBRACE statementlist RBRACE elifgroup optelse'''
    #t[0] = ['if', t[3], 'then', t[6], 'elif', t[8], 'else', t[9]]
    t[0] = ast.IfElse(t[3], t[6], t[8], t[9])

def p_error(t):
    print("Syntax error at %s (line:%d)" % (t.value, t.lineno))
    print t

yacc.yacc(start = 'toplevelgroup')

def load_file(filename, includeDict=None):
    file_path, file_base = os.path.split(filename)
    if not includeDict:
        includeDict = {}

    f = open(filename)
    f_lines = list(f.readlines())

    out_buffer = ''
    for line in f_lines:
        key = '@include'
        if line.startswith(key):
            start_quote = line.index('"')
            end_quote = line.rindex('"')
            if start_quote == -1 or end_quote == -1:
                print "malformed include:",line
                raise RuntimeError
            included_filename = line[start_quote+1 : end_quote]
            included_path = os.path.join(file_path, included_filename)
            if not (included_path in includeDict):
                included_file = load_file(included_path, includeDict)
                out_buffer = out_buffer + '# INCLUDED FILE BEGINS: %s \n' % included_path
                out_buffer = out_buffer + included_file + '\n'
                out_buffer = out_buffer + '# INCLUDED FILE ENDS: %s \n' % included_path
                includeDict[included_path] = 1;
        else:
            out_buffer = out_buffer + line
    return out_buffer

def makeObj(name, mainFunc):
    objFile = open(name, 'wb')
    obj = ast.gLlvmModule.to_native_object(objFile)
    objFile.close()

def makeBC(name, mainFunc):
    print "making BC", name
    bcFile = open(name, 'wb')
    bc = ast.gLlvmModule.to_bitcode(bcFile)
    bcFile.close()

def compile(filename, basename, outname, bc_name):
    sourcecode = load_file(filename)
    ast.gLlvmModule = llvm.core.Module.new(basename)
    lexer.input(sourcecode)

    # Tokenize
    while True:
        tok = lexer.token()
        if not tok:
            break
        #print tok

    #print "parsing:"
    #for linenum, line in enumerate(sourcecode.split('\n')):
    #    print "%03d : %s " % (linenum+1, line)

    tree = yacc.parse(sourcecode)

    topLevelObjs = []

    #print "about to generate code"
    if tree:
        for tlt in tree:
            #print "making decl for",tlt.name
            tlt.generateDecl()
        for tlt in tree:
            obj = tlt.generateCode()
            if not (obj is None):
                topLevelObjs.append(obj)
            print

    #for tlo in topLevelObjs:
    #    print "tlo:",tlo.name

    if bc_name:
        makeBC(bc_name, None)
    if outname:
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

def make_bc_filename(module_name):
    return module_name + '.bc'

if __name__ == '__main__':
    if len(sys.argv) <2 or len(sys.argv) > 3:
        print_usage()
        sys.exit(-1)
    input_filename = sys.argv[1]
    module_name = make_module_name(input_filename)
    if len(sys.argv) == 2:
        obj_filename = make_obj_filename(module_name)
        bc_filename = make_bc_filename(module_name)
    else:
        if sys.argv[2].endswith('.bc'):
            bc_filename = sys.argv[2]
            obj_filename = None
        elif sys.argv[2].endswith('.o'):
            obj_filename = sys.argv[2]
            bc_filename = None
        else:
            print_usage()
            sys.exit(-1)

    compile(input_filename, module_name, obj_filename, bc_filename)
