import llvmlite.ir as ir
import llvmlite.ir.context as ircontext
import llvmlite.binding as llvm
import numpy as np
from ctypes import CFUNCTYPE, c_int, POINTER

gLlvmModule = None
gLlvmBuilder = None
gNamedValues = {}

funcDefs = {}

classDict = {}

gGlobalVars = {}

gFrames = []

gNameCounter = 0

def isIntType(ty):
    return isinstance(ty, ir.IntType)

def isFloatType(ty):
    return isinstance(ty, ir.FloatType)

def isVariableType(ty):
    return (isinstance(ty, ir.instructions.AllocaInstr) or
            isinstance(ty, ir.GlobalVariable))

def maybeDerefCode(c):
    if (isinstance(c, ir.GlobalVariable) or 
        isinstance(c, ir.instructions.AllocaInstr)):
        return gLlvmBuilder.load(c)
    return c

def init_llvm(basename):
    llvm.initialize()
    llvm.initialize_native_target()
    llvm.initialize_native_asmprinter()

    global gLlvmModule
    gLlvmModule = ir.Module(name=basename)


class Frame:
    def __init__(self, name=None):
        self.locals = {}
        self.consts = {}
        if not name:
            global gNameCounter
            name = "Frame_%04d" % gNameCounter 
            gNameCounter += 1
        usedNames = []
        for f in gFrames:
            usedNames.append(f.name)
        c = 0
        while name in usedNames:
            name = "%s_%03d" % (name, c)
            c += 1
        self.name = name

class ASTNode(object):
    def __init__(self, linenum, typename):
        self.linenum = linenum
        self.llvmNode = None
        self.typename = typename

    def generateCode(self, breakBlock=None):
        print "going to raise",self
        raise Exception("No Code Generated (must subclass)")

    def getPtr(self):
        print "going to raise", self
        raise Exception("No pointer (must subclass)")

    def generateDecl(self):
        return None

    def __str__(self):
        return self.typename

def parseKind(k):
    kindDict = {ir.TYPE_UNKNOWN: 'unknown',
                ir.TYPE_POINTER: 'pointer',
                ir.TYPE_STRUCT: 'struct',
                ir.TYPE_METADATA: 'metadata',
               }
                
    if k in kindDict:
        return kindDict[k]
    return '???'


def makeType(typedesc):
    if typedesc == 'int':
        return ir.IntType(32)
    if typedesc == 'void':
        return ir.VoidType()
    if typedesc == 'float':
        return ir.FloatType()
    if typedesc in classDict:
        return classDict[typedesc]['identifiedStruct']
    print "making unknown type:",typedesc
    raise ValueError

def pushFrame(name):
    frame = Frame(name)
    #print "made a new frame:",frame.name
    gFrames.append(frame)
    return frame

def popFrame(oldFrame):
    if (len(gFrames)<1):
        print "no frames on stack"
        raise RuntimeError
    if gFrames[-1] != oldFrame:
        print "last frame on stack is %s, should be %s" % (gFrames[-1].name, frame.name)
        raise RuntimeError

    #print "leaving frame",frame.name
    gFrames.pop(-1)

class FuncDeclNode(ASTNode):
    def __init__(self, rettype, name, arglist, linenum):
        super(FuncDeclNode, self).__init__(linenum, "FuncDeclNode")
        self.rettypestr = rettype
        self.rettype = makeType(rettype)
        self.name = name
        self.arglist = arglist
        if arglist is None:
            # print "arglist is none in FuncDeclNode"
            self.arglist = []

    def generateCode(self, breakBlock=None):
        #print "generating code for funcdecl",self.name, self.arglist
        argtypelist = []
        argnamelist = []
        for arg in self.arglist:
            argtypelist.append(makeType(arg.typestr))
            argnamelist.append(arg.name)

        functype = ir.FunctionType(self.rettype, argtypelist)
        #print "functype:",functype

        #print "module functions:"
        foundDup = False
        for f in gLlvmModule.functions:
            #print f.name, f
            #print dir(f)
            if self.name == f.name:
                #print "found dup"
                foundDup = True
                funcobj = f
                break

        if not foundDup:
            funcobj = ir.Function(gLlvmModule, functype, name=self.name)
            #print "made a function declaration for name:", self.name

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
    def __init__(self, linenum, qualifiers, typeName, name, initializer):
        super(GlobalVarDeclNode, self).__init__(linenum, "GlobalVarDeclNode")
        self.typeName = typeName
        self.name = name
        self.initializer = initializer
        if qualifiers:
            self.qualifiers = qualifiers
        else:
            self.qualifiers = []
        #print "made global var decl:", self.typeName, name
        #print "qualifiers:", qualifiers

    def generateCode(self, breakBlock=None):
        typeObj = makeType(self.typeName)
        globalVars = gLlvmModule.global_values
        if self.name in globalVars:
            print 'var already declared:',self.name
            raise RuntimeError

        var = ir.GlobalVariable(gLlvmModule, typeObj, self.name)
        #print "var initializer:",typeObj
        if isinstance(typeObj, ir.IntType):
            var.initializer = ir.Constant(typeObj, 0)
        elif isFloatType(typeObj):
            var.initializer = ir.Constant(typeObj, 0.0)

        #var.initializer = ir.Constant(typeObj, ir.Undefined())
        if not (self.initializer is None):
            valueCode = self.initializer.generateCode(None)
            var.initializer = valueCode
        if 'const' in self.qualifiers:
            #print "setting constant"
            var.global_constant = True

        gGlobalVars[self.name] = var

        #print "made var:",var
        #print dir(var)
        #print

    def __str__(self):
        return "(%s) %s" % (self.type, self.name)

class LocalVarDeclNode(ASTNode):
    def __init__(self, linenum, qualifiers, typeName, name, initializer):
        super(LocalVarDeclNode, self).__init__(linenum, "LocalVarDeclNode")
        self.typeName = typeName
        self.name = name
        self.initializer = initializer
        if qualifiers:
            self.qualifiers = qualifiers
        else:
            self.qualifiers = []
        #print "made local var decl:", self.typeName, name

    def generateCode(self, breakBlock=None):
        #print "generating code for local variable decl:",self.typeName, self.name
        typeObj = makeType(self.typeName)
        #print "typeObj:",typeObj
        sz=None
        frame = gFrames[-1]
        if ((self.name in frame.locals) or
            (self.name in frame.consts)):
            print "variable '%s' already declared in frame '%s'"%(self.name, frame.name)
            raise RuntimeError
        var = gLlvmBuilder.alloca(typeObj, size=sz, name=self.name)
        #metadata = {'type' : typeObj,
        #            'typeName' : self.typeName,
        #            'var' : var
        #}
        
        #print "var:",var
        #print "inserting into frame",frame.name
        #print dir(var)
        #print "var name:", var.name
        #print "var type:", var.type

        if 'const' in self.qualifiers:
            #print "inserting into consts"
            frame.consts[self.name] = var
            #print frame.consts
            #metadata['const'] = True
        else:
            #print "inserting %s into vars" % self.name
            frame.locals[self.name] = var
            #metadata['const'] = False
        #print "made var:",var
        #print

        if not(self.initializer is None):
            valueCode = self.initializer.generateCode(None)
            try:
                gLlvmBuilder.store(valueCode, var)
            except RuntimeError:
                print "can't assign expression of type %s to variable %s of type %s" % (valueCode.type,
                                                                                        self.varname,
                                                                                        var.type)
                raise

    def __str__(self):
        return "(%s) %s (local)" % (self.type, self.name)

def lookupVarByName(name):
    #print "looking up",name
    for i in range(len(gFrames)-1, -1, -1):
        frame = gFrames[i]
        if name in frame.locals:
            #print "found in",frame.name
            return frame.locals[name]
        if name in frame.consts:
            return frame.consts[name]
    if name in gNamedValues:
        #print "found in gNamedValues"
        var = gNamedValues[name]
        return var
    if name in gGlobalVars:
        #print "found in globals"
        var = gGlobalVars[name]
        return var
    #print "not found"
    return None


class MemberDecl(ASTNode):
    def __init__(self, linenum, typename, membername):
        super(MemberDecl, self).__init__(linenum, "MemberDecl")
        self.typename = typename
        self.membername = membername

    def generateCode(self, breakBlock=None):
        #print "declaring member:", self.typename, self.membername
        pass


class ClassDecl(ASTNode):
    def __init__(self, linenum, classname, memberlist):
        super(ClassDecl, self).__init__(linenum, "ClassDecl")
        self.classname = classname
        self.memberlist = memberlist

    def generateCode(self, breakBlock=None):
        #print "making class decl"
        #print self.classname
        typelist = []
        namedtypelist = []

        for m in self.memberlist:
            #print m.typename, m.membername
            typelist.append(makeType(m.typename))
            namedtypelist.append({'name': m.membername,
                                  'typename': m.typename})
        
        literalStructObj = ir.LiteralStructType(typelist)
        context = ircontext.global_context
        identifiedStructObj = context.get_identified_type(self.classname)
        identifiedStructObj.set_body(*literalStructObj.elements)
        
        classObj = {'literalStruct': literalStructObj,
                    'identifiedStruct': identifiedStructObj,
                    'elements':namedtypelist}
        classDict[self.classname] = classObj

class AssignStatement(ASTNode):
    def __init__(self, linenum, lvalue, rvalue):
        super(AssignStatement, self).__init__(linenum, "AssignStatement")
        self.lvalue = lvalue
        self.rvalue = rvalue

    def generateCode(self, breakBlock=None):
        #print "lval:", self.lvalue

        lValIsAggregate = False

        if isinstance(self.lvalue, str):
            name = self.lvalue
            #print 'lval is a string:', name
            var = lookupVarByName(name)
        elif isinstance(self.lvalue, MemberRef):
            #print 'found member reference'
            var = self.lvalue.generateCode(breakBlock)
            lValIsAggregate = True
        else:
            var = self.lvalue.generateCode(breakBlock)
            name = self.lvalue.name

        if not var:
            print "don't know how to deal with", self.name, self.linenum
            raise RuntimeError

        rval = self.rvalue.generateCode(breakBlock)
        #print "rval:", rval
        #print "rval type:", rval.type

        rval = maybeDerefCode(rval)
        #print "dr rval:", rval
        #print "rval type:", rval.type

        if lValIsAggregate:
            offset = 1 # var.bdg_offset
            gLlvmBuilder.insert_value(var, rval, offset, name='insagg')
        else:
            try:
                gLlvmBuilder.store(rval, var)
            except RuntimeError:
                print "can't assign expression of type %s to variable %s of type %s" % (rval.type,
                                                                                    self.lvalue,
                                                                                    self.lvalue.type
                                                                                        )
                raise RuntimeError

    def __str__(self):
        return "%s := %s" % (self.varname, str(self.value))
        

class VarLookup(ASTNode):
    def __init__(self, name, linenum):
        super(VarLookup, self).__init__(linenum, "VarLookup")
        self.name = name

    def generateCode(self, breakBlock=None):
        var = lookupVarByName(self.name)
        if var:
            # TODO - const
            #isConst = varMetadata['const']
            #isConst = False
            #
            #if isConst:
            #    print "can't assign expression %s to const variable %s" % (self.value,
            #                                                               self.varname)
            #    raise RuntimeError

            return var # gLlvmBuilder.load(var)
        else:
            print "cannot find '%s' in gNamedValues, gGlobalVars, or gLocalVars" % self.name
            raise RuntimeError

    def getMetadata(self):
        return lookupVarByName(self)
        

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
        gLlvmBuilder = ir.IRBuilder()
        gLlvmBuilder.position_at_end(block)

        frame = pushFrame(self.name)

        try:
            retval = self.body.generateCode(breakBlock)
            #print "generated code for func def: %s" % self.name, retval
            #print funcobj
            if gLlvmBuilder.basic_block.terminator is None:
                #print "inserting a void return"
                gLlvmBuilder.ret_void()

            #funcobj.verify()
        except:
            #funcobj.delete()
            raise
            
        popFrame(frame)
        gLlvmBuilder = None

        return funcobj


class IfElse:
    def __init__(self, conditional, body, eliflist, elsebody):
        self.conditional = conditional
        self.body = body
        self.eliflist = eliflist
        self.elsebody = elsebody

        """
        print "ifelse block"
        print "conditional:", self.conditional
        print "body:", self.body
        print "eliflist:", self.eliflist
        print "elsebody:", self.elsebody
        """

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
        if isIntType(condCode.type):
            condition_bool = condCode
        elif isFloatType(condCode.type):
            condition_bool = gLlvmBuilder.fcmp_ordered('!=',
                                                       condCode,
                                                       llvm.core.Constant.float(llvm.core.Type.double(), 0.0),
                                                       'ifcond')
        return condition_bool
        

    def generateCode(self, breakBlock=None):
        funcObj = gLlvmBuilder.basic_block.function

        #print "generating code for condition"
        #print self.conditions

        condCount = len(self.conditions)
        thenBlocks = []
        testBlocks = [gLlvmBuilder.basic_block]
        mergeBlock = None

        for ci in range(condCount):
            thenBlocks.append(funcObj.append_basic_block('thenblock'+str(ci)))
            if ci:
                testBlocks.append(funcObj.append_basic_block('testblock'+str(ci)))

        testBlocks.append(funcObj.append_basic_block('finalelse'))

        #print "thenBlocks:", thenBlocks
        #print "testBlocks:", testBlocks
        
        for i in range(condCount):
            #print "about to make a branch"
            #print i
            condition = self.conditions[i]
            #print condition
            body = self.bodies[i]
            testBlock = testBlocks[i]
            thenBlock = thenBlocks[i]
            elseBlock = testBlocks[i+1]

            gLlvmBuilder.position_at_end(testBlock)
            condition_bool = self.generateCondition(condition, funcObj)
            gLlvmBuilder.cbranch(condition_bool, thenBlock, elseBlock)

            gLlvmBuilder.position_at_end(thenBlock)
            frame = pushFrame("then")
            body.generateCode(breakBlock)
            if gLlvmBuilder.basic_block.terminator is None:
                if mergeBlock is None:
                    mergeBlock = funcObj.append_basic_block('mergeblock')
                gLlvmBuilder.branch(mergeBlock)
            popFrame(frame)

        elseBlock = testBlocks[-1]
        gLlvmBuilder.position_at_end(elseBlock)
        if self.elsebody:
            frame = pushFrame("else")
            else_value = self.elsebody.generateCode(breakBlock)
            popFrame(frame)
        if gLlvmBuilder.basic_block.terminator is None:
            if mergeBlock is None:
                mergeBlock = funcObj.append_basic_block('mergeblock')
            gLlvmBuilder.branch(mergeBlock)
        if not(mergeBlock is None):
            gLlvmBuilder.position_at_end(mergeBlock)

        return None

                             
class ReturnStatement(ASTNode):
    def __init__(self, linenum, expr):
        super(ReturnStatement, self).__init__(linenum, "ReturnStatement")
        self.expr = expr

    def __str__(self):
        return "RETURN {%s}" % str(self.expr)

    def generateCode(self, breakBlock=None):
        if (self.expr is None):
            gLlvmBuilder.ret_void()
        else:
            #print "making a return",self.expr
            code = self.expr.generateCode(None)
            code = maybeDerefCode(code)
            gLlvmBuilder.ret(code)

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

        frame = pushFrame("loop")
        gLlvmBuilder.branch(loopBlock)
        gLlvmBuilder.position_at_end(loopBlock)
        self.statements.generateCode(breakBlock=endOfLoopBlock)
        gLlvmBuilder.branch(loopBlock)
        gLlvmBuilder.position_at_end(endOfLoopBlock)
        popFrame(frame)
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


class MemberRef(ASTNode):
    def __init__(self, linenum, base, membername):
        super(MemberRef, self).__init__(linenum, "MemberRef")
        self.base = base
        self.membername = membername

    def generateCode(self, breakBlock):
        #print "generating member reference"
        base = self.base.generateCode(breakBlock)
        #print "base object:", base
        t = base.type
        #print "base type:", base.type

        #print "member name:", self.membername

        if base.type.is_pointer:
            t = base.type.pointee

        #print t, t.name

        found_type = None
        if t.name in classDict:
            found_type=classDict[t.name]
        else:
            print "can't find class:", t, t.name, self.linenum
            raise RuntimeError

        offset = -1

        elts = found_type['elements']
        
        for i,e in enumerate(elts):
            #print e,i
            if e['name'] == self.membername:
                offset = i
                break
        if offset == -1:
            print "can't find %s in %s" % (self.membername, btname)
            print self.linenum
            raise RuntimeError

        #print "offset:",offset

        #print base.type
        #print base.name
        #print dir(base)

        base.bdg_offset = offset
        var = gLlvmBuilder.load(base)
        return var

    def getPtr(self):
        base = self.base.generateCode(None)
        return self.base.getPtr()


class FunctionCall(ASTNode):
    def __init__(self, linenum, functionname, arglist):
        super(FunctionCall, self).__init__(linenum, "FunctionCall")
        self.name = functionname
        self.arglist = arglist

    def __str__(self):
        s = "CALL {%s} {%s}" % (self.name, str(self.arglist))
        return s

    def generateCode(self, breakBlock):
        name = None
        callee = None

        if isinstance(self.name, str):
            funcName = self.name
        else:
            # TODO - what is this?
            funcName = self.name.name
        for f in gLlvmModule.functions:
            if f.name == funcName:
                callee = f
                break

        if callee is None:
            print "can't find function:",self.name
            raise RuntimeError

        calleeArgLen = len(callee.args)
        if self.arglist is None:
            self.arglist = []

        selfArgLen = len(self.arglist)
        if calleeArgLen != selfArgLen:
            print "error in call to",self.name 
            raise RuntimeError('Incorrect number of arguments in call to '+self.name)

        evaluatedArguments = map(lambda x: x.generateCode(None), self.arglist)
        
        for i, x in enumerate(evaluatedArguments):
            #print "arg #%d " % i , x

            if isinstance(x, ir.GlobalVariable):
                #print "is a global"
                evaluatedArguments[i] = gLlvmBuilder.load(x)
            elif isinstance(x, ir.instructions.AllocaInstr):
                #print "is a local"
                evaluatedArguments[i] = gLlvmBuilder.load(x)
            else:
                #print x.type
                pass
                
        try:
            return gLlvmBuilder.call(callee, evaluatedArguments)
        except TypeError:
            print "Type Error in line", self.linenum
            raise


class ConstantIntegerNode(ASTNode):
    def __init__(self, value, linenum):
        super(ConstantIntegerNode, self).__init__(linenum, "ConstantIntegerNode")
        self.value = value
        self.linenum = linenum
        # print "constant integer node:",value
        self.llvmNode = ir.Constant(ir.IntType(32), value)
        
    def __str__(self):
        return str(self.llvmNode)

    def generateCode(self, breakBlock=None):
        return self.llvmNode

class ConstantFloatNode(ASTNode):
    def __init__(self, value, linenum):
        super(ConstantFloatNode, self).__init__(linenum, "ConstantFloatNode")
        self.value = value
        self.linenum = linenum
        # print "constant float node:",value
        self.llvmNode = ir.Constant(ir.FloatType(), value)

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
        #print code0.type
        #print code1
        #print code1.type
        #print self.linenum

        """
        if not (code0.type == code1.type):
            print "cannot convert types on line", self.linenum
            print "code0 type:",code0.type
            print "code0:", code0
            print "op:",self.opstr
            print "code1 type:",code1.type
            print "code1:", code1
            raise RuntimeError
        """

        if isVariableType(code0):
            code0 = gLlvmBuilder.load(code0)
        if isVariableType(code1):
            code1 = gLlvmBuilder.load(code1)

        if self.opstr == '+':
            if isIntType(code0.type):
                return gLlvmBuilder.add(code0, code1, "addtmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fadd(code0, code1, "faddtmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '-':
            if isIntType(code0.type):
                return gLlvmBuilder.sub(code0, code1, "subtmp")
            elif isFloatType(code0.type):
                #print "subtracting", code0, code1
                return gLlvmBuilder.fsub(code0, code1, "fsubtmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '*':
            if isIntType(code0.type):
                return gLlvmBuilder.mul(code0, code1, "multmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fmul(code0, code1, "fmultmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '/':
            if isIntType(code0.type):
                return gLlvmBuilder.sdiv(code0, code1, "divtmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fdiv(code0, code1, "fdivtmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '&&':
            return gLlvmBuilder.and_(code0, code1, "andtmp")
        elif self.opstr == '||':
            return gLlvmBuilder.or_(code0, code1, "ortmp")
        elif self.opstr == '==':
            if isIntType(code0.type):
                return gLlvmBuilder.icmp_signed('==', code0, code1, "cmptmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fcmp_ordered(llvm.core.FCMP_OEQ, code0, code1, "fcmptmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '<':
            if isIntType(code0.type):
                return gLlvmBuilder.icmp_signed('<', code0, code1, "cmplttmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fcmp_ordered('<', code0, code1, "fcmplttmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '>':
            if isIntType(code0.type):
                return gLlvmBuilder.icmp_signed('>', code0, code1, "cmpgttmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fcmp_ordered('>', code0, code1, "fcmpgttmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '<=':
            if isIntType(code0.type):
                return gLlvmBuilder.icmp_signed('<=', code0, code1, "cmpletmp")
            elif code0.type == llvm.core.Type.float():
                return gLlvmBuilder.fcmp_ordered('<=', code0, code1, "fcmpletmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        elif self.opstr == '>=':
            if isIntType(code0.type):
                return gLlvmBuilder.icmp_signed('>=', code0, code1, "cmpgetmp")
            elif isFloatType(code0.type):
                return gLlvmBuilder.fcmp_ordered('>=', code0, code1, "fcmpgetmp")
            else:
                print code0.type,"is unknown type in",code0
                raise RuntimeError
        else:
            print "invalid operator:", self.opstr
            print "maybe?", dir(gLlvmBuilder)
            raise ValueError


class NegativeExprNode(ASTNode):
    def __init__(self, linenum, node):
        super(NegativeExprNode, self).__init__(linenum, "NegativeExprNode")
        self.node=node

    def __str__(self):
        return '-'+str(self.node)

    def generateCode(self, breakBlock=None):
        code = self.node.generateCode(None)

        codeType = code.type
        if isIntType(codeType):
            #print dir(code)
            return gLlvmBuilder.sub(ir.Constant(ir.IntType(32), 0), code)
        elif isFloatType(codeType):
            if not (gLlvmBuilder is None):
                #print "negating",code
                #print code.constant
                return gLlvmBuilder.fsub(ir.Constant(ir.FloatType(), 0.0), code)
            else:
                #print "negating at top level"
                #print code
                #print dir(code)
                c = code.constant
                return ir.Constant(ir.FloatType(), -c)
        else:
            print "I don't know how to negate this type:",codeType
            raise RuntimeError



class topLevelGroup(ASTNode):
    def __init__(self, funcdeflist):
        #print "top level group: ",funcdeflist
        pass
    
class argDeclNode(ASTNode):
    def __init__(self, typestr, argname):
        self.name = argname
        self.typestr = typestr

                                
