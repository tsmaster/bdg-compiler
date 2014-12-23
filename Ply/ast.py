import llvm.core

gLlvmModule = None
gLlvmBuilder = None
gNamedValues = {}

funcDefs = {}

gGlobalVars = {}

class ASTNode(object):
    def __init__(self, linenum, typename):
        self.linenum = linenum
        self.llvmNode = None
        self.typename = typename

    def generateCode(self, breakBlock=None):
        print "going to raise",self
        raise Exception("No Code Generated (must subclass)")

    def generateDecl(self):
        return None

    def __str__(self):
        return self.typename

def makeType(typedesc):
    if typedesc == 'int':
        return llvm.core.Type.int()
    if typedesc == 'void':
        return llvm.core.Type.void()
    print "making unknown type:",typedesc
    raise ValueError

class FuncDeclNode(ASTNode):
    def __init__(self, rettype, name, arglist, linenum):
        super(FuncDeclNode, self).__init__(linenum, "FuncDeclNode")
        self.rettypestr = rettype
        self.rettype = makeType(rettype)
        self.name = name
        self.arglist = arglist
        if arglist is None:
            print "arglist is none in FuncDeclNode"
            self.arglist = []

    def generateCode(self, breakBlock=None):
        print "generating code for funcdecl",self.arglist
        argtypelist = []
        argnamelist = []
        for arg in self.arglist:
            argtypelist.append(makeType(arg.typestr))
            argnamelist.append(arg.name)

        functype = llvm.core.Type.function(self.rettype, argtypelist)
        #funcobj = llvm.core.Function.new(gLlvmModule, functype, self.name)
        funcobj = llvm.core.Function.get_or_insert(gLlvmModule, functype, self.name)
        print "made a function declaration for name:", self.name

        self.llvmNode = funcobj
        if funcobj.name != self.name:
            # something already exists
            # don't allow redef or redecl
            #funcobj.delete()
            funcobj = gLlvmModule.get_function_named(self.name)

            # if the function already has a body, this is bad.
            if not funcobj.is_declaration:
                raise RuntimeError('Redefinition of function: '+self.name)

            # if f took a different number of args, that's bad (callee?)
            if len(funcobj.args) != len(self.arglist):
                raise RuntimeError('wrong args')
                
        for arg, argName in zip(funcobj.args, argnamelist):
            #print "assigning",argName,arg
            arg.name = argName
            gNamedValues[argName] = arg
        return funcobj

    def generateDecl(self):
        return self.generateCode(None)


class GlobalVarDeclNode(ASTNode):
    def __init__(self, linenum, typeName, name):
        super(GlobalVarDeclNode, self).__init__(linenum, "GlobalVarDeclNode")
        self.typeName = typeName
        self.name = name
        print "made global var decl:", self.typeName, name

    def generateCode(self, breakBlock=None):
        typeObj = makeType(self.typeName)
        var = gLlvmModule.add_global_variable(typeObj, self.name)
        var.initializer = llvm.core.Constant.undef(typeObj)
        gGlobalVars[self.name] = var
        print "made var:",var
        print

    def __str__(self):
        return "(%s) %s" % (self.type, self.name)


class AssignStatement(ASTNode):
    def __init__(self, linenum, varname, value):
        super(AssignStatement, self).__init__(linenum, "AssignStatement")
        self.varname = varname
        self.value = value

    def generateCode(self, breakBlock=None):
        if self.varname in gGlobalVars:
            gLlvmBuilder.store(self.value.generateCode(None), gGlobalVars[self.varname])
        else:
            print "don't recognize variable:",self.varname
            raise RuntimeError

    def __str__(self):
        return "(%s) %s" % (self.type, self.name)
        

class RValueVar(ASTNode):
    def __init__(self, name, linenum):
        super(RValueVar, self).__init__(linenum, "RValueVar")
        self.name = name

    def generateCode(self, breakBlock=None):
        if self.name in gNamedValues:
            return gNamedValues[self.name].load()
        elif self.name in gGlobalVars:
            return gLlvmBuilder.load(gGlobalVars[self.name])
        else:
            print "cannot find %s in gNamedValues or gGlobalVars" % self.name
            raise RuntimeError


class FuncDefNode(ASTNode):
    def __init__(self, prototype, funcname, body, linenum):
        super(FuncDefNode, self).__init__(linenum, "FuncDefNode")
        self.prototype = prototype
        self.linenum = linenum
        self.body = body
        self.name = funcname

    def generateCode(self, breakBlock=None):
        gNamedValues.clear()

        funcobj = self.prototype.generateCode(breakBlock)

        block = funcobj.append_basic_block('entry')
        global gLlvmBuilder
        gLlvmBuilder = llvm.core.Builder.new(block)

        try:
            retval = self.body.generateCode(breakBlock)
            print "generated code for func def: %s" % self.name, retval
            print funcobj

            if not(retval is None):
                gLlvmBuilder.ret(retval)

            funcobj.verify()
        except:
            funcobj.delete()
            raise

        return funcobj


class IfElse:
    def __init__(self, conditional, body, eliflist, elsebody):
        self.conditional = conditional
        self.body = body
        self.eliflist = eliflist
        self.elsebody = elsebody

        print "ifelse block"
        print "conditional:", self.conditional
        print "body:", self.body
        print "eliflist:", self.eliflist
        print "elsebody:", self.elsebody

        self.conditions = [conditional]
        self.bodies = [body]

        for cond,body in self.eliflist:
            self.conditions.append(cond)
            self.bodies.append(body)
        
    def __str__(self):
        return "IF {%s}\nTHEN{%s}\nELIF{%s}\nELSE{%s}" % (str(self.conditional),
                                                          str(self.body),
                                                          str(self.eliflist),
                                                          str(self.elsebody))

    def generateCondition(self, condition, funcObj):
        condCode = condition.generateCode(None)
        if (condCode.type.kind == llvm.core.TYPE_INTEGER):
            condition_bool = condCode
        elif (condCode.type.kind == llvm.core.TYPE_FLOAT):
            condition_bool = gLlvmBuilder.fcmp(llvm.core.FCMP_ONE, 
                                               condCode,
                                               llvm.core.Constant.float(llvm.core.Type.double(), 0.0),
                                               'ifcond')
        return condition_bool
        

    def generateCode(self, breakBlock=None):
        funcObj = gLlvmBuilder.basic_block.function

        print "generating code for condition"
        print self.conditions

        condCount = len(self.conditions)
        thenBlocks = []
        testBlocks = [gLlvmBuilder.basic_block]

        for ci in range(condCount):
            thenBlocks.append(funcObj.append_basic_block('thenblock'+str(ci)))
            if ci:
                testBlocks.append(funcObj.append_basic_block('testblock'+str(ci)))

        testBlocks.append(funcObj.append_basic_block('finalelse'))

        print "thenBlocks:", thenBlocks
        print "testBlocks:", testBlocks
        
        for i in range(condCount):
            print "about to make a branch"
            print i
            condition = self.conditions[i]
            print condition
            body = self.bodies[i]
            testBlock = testBlocks[i]
            thenBlock = thenBlocks[i]
            elseBlock = testBlocks[i+1]
            print "test:", testBlock
            print "then:", thenBlock
            print "else:", elseBlock

            print "positioning at end of test block", testBlock
            gLlvmBuilder.position_at_end(testBlock)
            condition_bool = self.generateCondition(condition, funcObj)
            print condition_bool
            gLlvmBuilder.cbranch(condition_bool, thenBlock, elseBlock)

            print "positioning at end of then block", thenBlock
            gLlvmBuilder.position_at_end(thenBlock)
            print "about to generate code for body:"
            print body
            print "in block"
            print gLlvmBuilder.basic_block
            body.generateCode(breakBlock)

        print "about to make an else"
        # emit else
        elseBlock = testBlocks[-1]
        print "else block:"
        print elseBlock
        print "else body:"
        print self.elsebody
        print "positioning at end of test block", elseBlock
        gLlvmBuilder.position_at_end(elseBlock)
        if self.elsebody:
            else_value = self.elsebody.generateCode(breakBlock)
        return None

                             
class BinaryExpr:
    def __init__(self, expr1, op, expr2):
        self.op = op
        self.exprs=[expr1, expr2]

    def __str__(self):
        return "BE: {%s} %s {%s}" % (self.exprs[0], self.op, self.exprs[1])


class ReturnStatement:
    def __init__(self, expr):
        self.expr = expr;

    def __str__(self):
        return "RETURN {%s}" % str(self.expr)

    def generateCode(self, breakBlock=None):
        gLlvmBuilder.ret(self.expr.generateCode(None))

class BreakStatement:
    def __init__(self):
        pass

    def __str__(self):
        return "BRK"

    def generateCode(self, breakBlock):
        gLlvmBuilder.branch(breakBlock)

class LoopStatement:
    def __init__(self, statementList):
        self.statements = statementList

    def __str__(self):
        return "LOOP {\n"+str(self.statements)+"\n}"
    
    def generateCode(self, breakBlock=None):
        outsideBlock = gLlvmBuilder.basic_block
        funcObj = gLlvmBuilder.basic_block.function
        loopBlock = funcObj.append_basic_block('loopblock')
        endOfLoopBlock = funcObj.append_basic_block('endofloopblock')
        gLlvmBuilder.branch(loopBlock)
        gLlvmBuilder.position_at_end(loopBlock)
        self.statements.generateCode(breakBlock=endOfLoopBlock)
        gLlvmBuilder.branch(loopBlock)
        gLlvmBuilder.position_at_end(endOfLoopBlock)        
        return None

class StatementList:
    def __init__(self, statements):
        self.statements = statements

    def __str__(self):
        s = "---\n"
        for idx, sm in enumerate(self.statements):
            s += "(%04d) : %s\n" % (idx, str(sm))
        s += "---\n"
        return s

    def generateCode(self, breakBlock):
        retval = None
        for s in self.statements:
            retval = s.generateCode(breakBlock)
        return retval

class FunctionCall:
    def __init__(self, functionname, arglist):
        self.name = functionname
        self.arglist = arglist

    def __str__(self):
        s = "CALL {%s} {%s}" % (self.name, str(self.arglist))
        return s

    def generateCode(self, breakBlock):
        name = None
        callee = gLlvmModule.get_function_named(self.name)
        calleeArgLen = len(callee.args)
        if self.arglist is None:
            self.arglist = []

        selfArgLen = len(self.arglist)
        if calleeArgLen != selfArgLen:
            print "error in call to",self.name 
            raise RuntimeError('Incorrect number of arguments in call to '+self.name)

        evaluatedArguments = map(lambda x: x.generateCode(None), self.arglist)
        return gLlvmBuilder.call(callee, evaluatedArguments)


class ConstantIntegerNode(ASTNode):
    def __init__(self, value, linenum):
        super(ConstantIntegerNode, self).__init__(linenum, "ConstantIntegerNode")
        self.value = value
        self.linenum = linenum
        # print "constant integer node:",value
        self.llvmNode = llvm.core.Constant.int(llvm.core.Type.int(), value)
        
    def __str__(self):
        return str(self.llvmNode)

    def generateCode(self, breakBlock=None):
        return self.llvmNode


class BinaryExprNode(ASTNode):
    def __init__(self, node1, node2, linenum, opstr):
        super(BinaryExprNode, self).__init__(linenum, "BinaryExprNode")
        self.nodes=[node1, node2]
        self.opstr=opstr

    def __str__(self):
        return '['+str(self.nodes[0])+str(self.opstr)+str(self.nodes[1])+']'

    def generateCode(self, breakBlock=None):
        #print "making binexpr", self.opstr
        code0 = self.nodes[0].generateCode(None)
        code1 = self.nodes[1].generateCode(None)
        #print code0
        #print code1
        if self.opstr == '+':
            return gLlvmBuilder.add(code0, code1, "addtmp")
        elif self.opstr == '-':
            return gLlvmBuilder.sub(code0, code1, "subtmp")
        elif self.opstr == '*':
            return gLlvmBuilder.mul(code0, code1, "multmp")
        elif self.opstr == '/':
            return gLlvmBuilder.sdiv(code0, code1, "divtmp")
        elif self.opstr == '==':
            return gLlvmBuilder.icmp(llvm.core.ICMP_EQ, code0, code1, "cmptmp")
        elif self.opstr == '<':
            return gLlvmBuilder.icmp(llvm.core.ICMP_SLT, code0, code1, "cmplttmp")
        elif self.opstr == '>':
            return gLlvmBuilder.icmp(llvm.core.ICMP_SGT, code0, code1, "cmplttmp")
        else:
            print "invalid operator:", self.opstr
            print "maybe?", dir(gLlvmBuilder)
            raise ValueError


class topLevelGroup(ASTNode):
    def __init__(self, funcdeflist):
        print "top level group: ",funcdeflist

    
class argDeclNode(ASTNode):
    def __init__(self, typestr, argname):
        self.name = argname
        self.typestr = typestr

                                
