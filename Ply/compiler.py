import ply.lex as lex
import ply.yacc as yacc
import ast

import llvmlite.binding as llvm
import sys
import os

SHOW_INPUT = 0
SHOW_TOKENS = 0
SHOW_MODULE = 0
SHOW_ASSEMBLY = 0

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
    #'STATIC',
    'CLASS',
    'IDENTIFIER',
    'DOT',
    'QUESTIONMARK',
    'COLON',
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
t_QUESTIONMARK = r'\?'
t_COLON = r':'
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
    #'static' : 'STATIC',
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
        t.value = ast.ConstantFloatNode(floatval, t.lexer.lineno)
    else:
        intval = int(t.value)
        t.value = ast.ConstantIntegerNode(intval, t.lexer.lineno)
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += len(t.value)

t_ignore = ' \t\r'

#Error Handling
def t_error(t):
    print "Illegal character '%s'" % t.value[0]
    print "line:", t.lexer.lineno
    t.lexer.skip(1)

lexer = lex.lex()

precedence = (
    ('left', 'ISEQUAL', 'NOTEQUAL'),
    ('left', 'LESSTHAN', 'GREATERTHAN', 'LESSEQUAL', 'GREATEREQUAL'),
    ('left','PLUS','MINUS'),
    ('left','TIMES','DIVIDE'),
    #('right','UMINUS'),
    )

def p_toplevelgroup(t):
    """ toplevelgroup : funcdecl toplevelgroup
                      | funcdef toplevelgroup
                      | globalvardecl toplevelgroup
                      | classdecl toplevelgroup
                      | empty
    """
    if len(t) == 3:
        t[0] = [t[1]] + t[2]
    else:
        t[0] = []

"""
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
"""


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
  'funcdef : type IDENTIFIER LPAREN argdecllist RPAREN LBRACE statement_list RBRACE'
  typename = t[1]
  funcname = t[2]
  argdecllist = t[4]
  statement_list = t[7]

  proto = ast.FuncDeclNode(typename, funcname, argdecllist, t.lexer.lineno)
  funcDefNode = ast.FuncDefNode(proto, funcname, statement_list, t.lexer.lineno)
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
    t[0] = ast.GlobalVarDeclNode(t.lexer.lineno, None, t[1], t[2], None)

def p_globalvardecl_array(t):
    '''globalvardecl : type IDENTIFIER LBRACKET expression RBRACKET SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lexer.lineno, None, t[1], t[2], None, arraysize=t[4])

def p_globalvardecl_constinitialized(t):
    '''globalvardecl : CONST type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lexer.lineno, t[1], t[2], t[3], t[5])

def p_globalvardecl_varinitialized(t):
    '''globalvardecl : type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.GlobalVarDeclNode(t.lexer.lineno, None, t[1], t[2], t[4])

# type-name (p 236, production 5)

def p_type_name(t):
    '''type_name : IDENTIFIER'''
    # TODO - expand this
    t[0] = t[1]

def p_statement_list(t):
    '''statement_list : statement
                      | statement statement_list'''
    if len(t) == 2:
        t[0] = ast.StatementList([t[1]])
    else:
        t[0] = ast.StatementList([t[1]] + t[2].statements)

# statement (p 236, production 9)

def p_statement_expression(t):
    '''statement : expression SEMICOLON'''
    t[0] = t[1]

def p_statement_ifelse(t):
    '''statement : ifelse'''
    t[0] = t[1]

def p_statement_return(t):
    '''statement : RETURN expression SEMICOLON'''
    t[0] = ast.ReturnStatement(t.lexer.lineno, t[2])

def p_statement_emptyreturn(t):
    '''statement : RETURN SEMICOLON'''
    t[0] = ast.ReturnStatement(t.lexer.lineno, None)

def p_statement_localvardecl(t):
    '''statement : type IDENTIFIER SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lexer.lineno, None, t[1], t[2], None, None)

def p_statement_localvardecl_initialized(t):
    '''statement : type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lexer.lineno, None, t[1], t[2], t[4], None)

def p_statement_localvardecl_constinitialized(t):
    '''statement : CONST type IDENTIFIER ASSIGN expression SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lexer.lineno, t[1], t[2], t[3], t[5], None)

def p_statement_localvardecl_array(t):
    '''statement : type IDENTIFIER LBRACKET expression RBRACKET SEMICOLON'''
    t[0] = ast.LocalVarDeclNode(t.lexer.lineno, None, t[1], t[2], None, t[4])

def p_statement_loop(t):
    '''statement : LOOP LBRACE statement_list RBRACE'''
    t[0] = ast.LoopStatement(t[3])

def p_statement_break(t):
    '''statement : BREAK SEMICOLON'''
    t[0] = ast.BreakStatement()

def p_statement_while_loop(t):
    '''statement : WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE'''
    t[0] = ast.WhileLoop(t[3], t[6])

# expressions (p 237 production 3)

def p_expression_assign(t):
    '''expression : assignment_expression'''
    t[0] = t[1]

# assignment-expression (p 237 production 4)

def p_assignment_expression_1(t):
    '''assignment_expression : conditional_expression'''
    t[0] = t[1]

def p_assignment_expression_2(t):
    '''assignment_expression : unary_expression ASSIGN conditional_expression'''
    t[0] = ast.AssignStatement(t.lexer.lineno, t[1], t[3])

# conditional_expression (p 237 production 6)
def p_conditional_expression(t):
    '''conditional_expression : binary_expression
                              | binary_expression QUESTIONMARK expression COLON conditional_expression
    '''
    if len(t) == 2:
        t[0] = t[1]
    else:
        t[0] = ast.TernaryOp(t[1], t[3], t[5], t.lexer.lineno)


# binary expressions (standin for logical-OR-expression, p 237 production 8)
def p_binary_expression(t):
    '''binary_expression : cast_expression
                         | binary_expression TIMES binary_expression
                         | binary_expression DIVIDE binary_expression
                         | binary_expression PLUS binary_expression
                         | binary_expression MINUS binary_expression
                         | binary_expression LESSTHAN binary_expression
                         | binary_expression LESSEQUAL binary_expression
                         | binary_expression GREATERTHAN binary_expression
                         | binary_expression GREATEREQUAL binary_expression
                         | binary_expression ISEQUAL binary_expression
                         | binary_expression NOTEQUAL binary_expression
                         | binary_expression LOGICAND binary_expression
                         | binary_expression LOGICOR binary_expression
    '''
    if len(t) == 2:
        t[0] = t[1]
    else:
        t[0] = ast.BinaryExprNode(t[1], t[3], t.lexer.lineno, t[2])


# cast expressions (p 238, production 4)

def p_cast_expression(t):
    '''cast_expression : unary_expression '''
# TODO: debug cast_expression reduce/reduce conflict.
#                       | LPAREN type_name RPAREN cast_expression'''
    if len(t) == 2:
        t[0] = t[1]
    else:
        t[0] = ast.CastTo(t[2], t[4], t.lexer.lineno)

# unary expressions (p 238, production 5)

def p_unary_expression_postfix(t):
    '''unary_expression : postfix_expression'''
    t[0] = t[1]

def p_unary_expression_minus(t):
    '''unary_expression : MINUS cast_expression'''
    t[0] = ast.NegativeExprNode(t.lexer.lineno, t[2])

# todo: unary_op unaryexpression

# postfix expressions (p 238, production 7)
def p_postfix_expression_primaryexpression(t):
    '''postfix_expression : primary_expression'''
    t[0] = t[1]

def p_postfix_expression_arrayref(t):
    '''postfix_expression : postfix_expression LBRACKET expression RBRACKET'''
    t[0] = ast.ArrayRef(t.lexer.lineno, t[1], t[3])

def p_postfix_expression_emptyfunctioncall(t):
    '''postfix_expression : postfix_expression LPAREN RPAREN'''
    t[0] = ast.FunctionCall(t.lexer.lineno, t[1], None)

def p_postfix_expression_functioncall(t):
    '''postfix_expression : postfix_expression LPAREN arglist RPAREN'''
    t[0] = ast.FunctionCall(t.lexer.lineno, t[1], t[3])

def p_postfix_expression_memberref(t):
    '''postfix_expression : postfix_expression DOT IDENTIFIER'''
    t[0] = ast.MemberRef(t.lexer.lineno, t[1], t[3])

# primary expressions (p 238, production 8)

def p_primary_expression_variable(t):
    '''primary_expression : IDENTIFIER'''
    t[0] = ast.VarLookup(t[1], t.lexer.lineno)
    #t[0] = t[1]

def p_primary_expression_number(t):
    '''primary_expression : NUMBER'''
    #TODO generic constants
    t[0] = t[1]

def p_primary_expression_parens(t):
    '''primary_expression : LPAREN expression RPAREN'''
    t[0] = t[2]

# ---

def p_elifgroup_empty(t):
    '''elifgroup : empty'''
    t[0] = []

def p_elifgroup_many(t):
    '''elifgroup : ELIF LPAREN expression RPAREN LBRACE statement_list RBRACE elifgroup'''
    t[0] = [(t[3], t[6])] + t[8]

def p_optelse_empty(t):
    '''optelse : empty'''
    t[0] = []

def p_optelse_single(t):
    '''optelse : ELSE LBRACE statement_list RBRACE'''
    t[0] = t[3]

def p_ifelse_if(t):
    '''ifelse : IF LPAREN expression RPAREN LBRACE statement_list RBRACE elifgroup optelse'''
    t[0] = ast.IfElse(t[3], t[6], t[8], t[9])

def p_error(t):
    print("Syntax error at %s (line:%d)" % (t.value, t.lexer.lineno))
    print t
    print t.type
    print t.value
    #print dir(t.lexer)
    print "lex state:",t.lexer.lexstate

yacc_debug = True
yacc_optimize = False

yacc.yacc(start = 'toplevelgroup',
          debug = yacc_debug,
          optimize=yacc_optimize,
          #debuglog = yacc.PlyLogger(open('yacc_debug.log', 'wt')),
          #errorlog = yacc.PlyLogger(open('yacc_error.log', 'wt'))
          )

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
                out_buffer = out_buffer + '### INCLUDED FILE BEGINS: %s \n' % included_path
                out_buffer = out_buffer + included_file + '\n'
                out_buffer = out_buffer + '### INCLUDED FILE ENDS: %s \n' % included_path
                includeDict[included_path] = 1;
        else:
            out_buffer = out_buffer + line
    return out_buffer

def makeObj(name, mainFunc):
    target_machine = llvm.Target.from_default_triple().create_target_machine()
    strmod = str(ast.gLlvmModule)

    if SHOW_MODULE:
        print "module:"
        print "==="
        print strmod
        print "==="
    llmod = llvm.parse_assembly(strmod)

    if SHOW_ASSEMBLY:
        print "assembly:"
        print "==="
        print target_machine.emit_assembly(llmod)
        print "==="

    objdata = target_machine.emit_object(llmod)
    objFile = open(name, 'wb')
    objFile.write(objdata)
    objFile.close()

def makeBC(name, mainFunc):
    print "making BC", name
    bcFile = open(name, 'wb')
    bc = ast.gLlvmModule.to_bitcode(bcFile)
    bcFile.close()

def compile(filename, basename, outname, bc_name):
    sourcecode = load_file(filename)
    if SHOW_INPUT:
        for i,codeline in enumerate(sourcecode.split('\n')):
            print "%05d %s" % (i+1, codeline)

    ast.init_llvm(basename)

    # Tokenize
    if SHOW_TOKENS:
        lexer.input(sourcecode)

        while True:
            tok = lexer.token()
            if not tok:
                break
            print tok


    #print "parsing:"

    tree = yacc.parse(sourcecode)

    topLevelObjs = []

    #print "about to generate code"
    if tree:
        for tlt in tree:
            #print "making decl for",tlt.name
            tlt.generateDecl()
        for tlt in tree:
            try:
                obj = tlt.generateCode()
            except TypeError:
                n = str(tlt)
                if 'name' in dir(tlt):
                    n = tlt.name
                print "error making code for",n
                raise
            if not (obj is None):
                topLevelObjs.append(obj)
            #print

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

    try:
        compile(input_filename, module_name, obj_filename, bc_filename)
    except RuntimeError:
        raise
        exit(-1)

    exit(0)
