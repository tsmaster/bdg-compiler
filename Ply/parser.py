import ply.lex as lex
import ply.yacc as yacc

import ast

import llvm.core
import llvm.ee

tokens = (
    'NUMBER',
    'IF',
    'ELIF',
    'ELSE',
    'RETURN',
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
    t[0] = t[1]

def p_argdecllist_many(t):
    '''argdecllist : argdecl COMMA argdecllist'''
    t[0] = [t[1]] + t[3]

def p_argdecl(t):
    '''argdecl : type IDENTIFIER'''
    t[0] = [ast.argDeclNode(t[1], t[2])]

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
    t[0] = [t[1]] + t[2]

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

def p_statement_assign(t):
    '''statement : IDENTIFIER ASSIGN expression'''
    t[0] = ast.AssignStatement(t[1], t[3])

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


data = '''
int fact(int x) {
  if (x==1) {
    return 1;
  } elif (x==0) {
    return 0;
  } else {
    return x * fact(x-1);
  }
}

int main() {
  fact(6);
}
'''

decldata = '''
int fact(int x);

int main();

int fact(int x) {
  if (x==1) {
    return 1;
  } elif (x == 0) {
    return 0;
  } else {
    return x * fact(x-1);
  }
}

int main() {
  return fact(6);
}
'''

declonly = '''
int fact(int x);
'''

simpledata = '''
int main() {
  return 127;
}
'''

fib = '''
int fib(int x) {
  if (x < 0) {
    return 0;
  } elif (x == 0) {
    return 1;
  } elif (x == 1) {
    return 1;
  } else {
    return fib(x-1) + fib(x-2);
  }
}

int main() {
  return fib(5);
}
'''

trig = '''

int main() {
  return sin(3);
}
'''

#llvm.core.load_library_permanently('/home/tsmaster/Dev/BDGRT/Ply/putchar.so')

putc_decl = '''
int putchari(int c);

int main() {
  putchari(68);
  putchari(76);
  putchari(10);
  return 0;
}
'''

num_test = '''
void print_integer(int num);
void print_char(int ascii);
void print_line();

int main() {
  print_integer(12);
  print_char(32);
  print_integer(10);
  print_char(32);
  print_integer(2014);
  print_line();
  return 0;
}
'''

many_call_test = '''
void print_integer(int num);
void print_line();

int fib(int x) {
  if (x < 0) {
    return 0;
  } elif (x == 0) {
    return 1;
  } elif (x == 1) {
    return 1;
  } else {
    return fib(x-1) + fib(x-2);
  }
}

int fact(int x) {
  if (x==1) {
    return 1;
  } elif (x == 0) {
    return 0;
  } else {
    return x * fact(x-1);
  }
}

int main() {
  print_integer(fib(0));
  print_line();
  print_integer(fib(1));
  print_line();
  print_integer(fib(2));
  print_line();
  print_integer(fib(3));
  print_line();
  print_integer(fib(4));
  print_line();
  print_integer(fib(5));
  print_line();
  print_integer(fib(6));
  print_line();
  print_integer(fib(7));
  print_line();

  print_line();

  print_integer(fact(0));
  print_line();
  print_integer(fact(1));
  print_line();
  print_integer(fact(2));
  print_line();
  print_integer(fact(3));
  print_line();
  print_integer(fact(4));
  print_line();
  print_integer(fact(5));
  print_line();
  print_integer(fact(6));
  print_line();
  print_integer(fact(7));
  print_line();
  return 0;
}
'''


sourcecode = many_call_test

ast.gLlvmModule = llvm.core.Module.new('bdg fact')
lexer.input(sourcecode)

# Tokenize
while True:
  tok = lexer.token()
  if not tok:
    break
  print tok

print "parsing:"

for linenum, line in enumerate(sourcecode.split('\n')):
    print "%03d : %s " % (linenum+1, line)


ast.gParsePhase = ast.PHASE_DECLARATIONS
tree = yacc.parse(sourcecode)

#ast.gParsePhase = ast.PHASE_DEFINITIONS
#tree = yacc.parse(data)

topLevelObjs = []

#print "top level things:"
#print tree

if tree:
    for tlt in tree:
        #print tlt.name
        #print tlt
        topLevelObjs.append(tlt.generateCode())
        print


def runMain(maincode):
    #print "main code:", maincode

    llvmExecutor = llvm.ee.ExecutionEngine.new(ast.gLlvmModule)

    asm = ast.gLlvmModule.to_native_assembly()
    asmFile = open('test.asm', 'wt')
    asmFile.write(asm)
    asmFile.close()

    objFile = open('test.o', 'wb')
    obj = ast.gLlvmModule.to_native_object(objFile)
    objFile.close()

    """
    bc = ast.gLlvmModule.to_bitcode()
    bcFile = open('test.bc', 'wb')
    bcFile.write(bc)
    bcFile.close()
    """
    # llvm-link -o test.exe -cppgen=program test.bc

    # llc -march=cpp test.bc -o test.cpp
    

    print ast.gLlvmModule
    print dir(ast.gLlvmModule)

    if not maincode:
        print "no code?!"
    else:
        #val = llvm.core.Constant.int(llvm.core.Type.int(), 6)
        result = llvmExecutor.run_function(maincode, [])

        print "result:",result.as_int()

"""
try:
  result = llvmExecutor.run_function(code, 6)

  print result
  print result.as_real(Type.double())
except Exception, e:
  print 'error:',e
"""


def makeObj(name, mainFunc):
    objFile = open(name, 'wb')
    obj = ast.gLlvmModule.to_native_object(objFile)
    objFile.close()


for tlo in topLevelObjs:
    #print tlo.name
    print tlo
    if tlo.name == 'main':
        #runMain(tlo)
        makeObj("test.o", tlo)
        break

