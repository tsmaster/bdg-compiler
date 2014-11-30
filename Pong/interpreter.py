import pygame
import struct


class VM:
    def __init__(self, stacksize = 1000, memsize=1000):
        self.stack=[]
        self.stacksize = stacksize
        self.memory=[0] * memsize
        self.allocated=[False] * memsize
        self.memsize = memsize
        
    def alloc(self, num_bytes):
        paddded_size = num_bytes + 1
        for i in range(self.memsize):
            found_blocker = False
            for j in range(padded_size):
                idx = i+j
                if idx >= memsize:
                    break
                if self.allocated[idx]:
                    found_blocker = True
                    break
            if not found_blocker:
                for j in range(padded_size):
                    self.allocated[i+j] = True
                return i+1
        return -1

    def eval_bytecode(self, prog):
        pc = 0
        while pc < len(prog):
            b = prog[pc]
            opcode = struct.unpack('B', b)[0]
            print "pc: %d op: %d"%(pc, opcode)
    
            if (opcode == 1):
                val = struct.unpack('h', prog[pc+1:pc+3])[0]
                self.stack.append(val)
                pc += 3
            elif (opcode == 2):
                loc = struct.unpack('B', prog[pc+1:pc+2])[0]
                v = self.stack.pop()
                self.memory[loc] = v
                print self.memory
                pc += 2
            elif (opcode == 3):
                loc = struct.unpack('B', prog[pc+1:pc+2])[0]
                val = self.memory[loc]
                self.stack.append(val)
                print "loaded from %d: %d"% (loc, val)
                pc += 2
            elif (opcode == 4):
                pc += 1
                v1 = self.stack.pop()
                v2 = self.stack.pop()
                print "add: v1: %d v2: %d" % (v1, v2)
                s = v1+v2
                self.stack.append(s)
            elif (opcode == 5):
                v = self.stack[-1]
                self.stack.append(v)
                pc += 1
            elif (opcode == 6):
                rel = struct.unpack('B', prog[pc+1:pc+2])[0]
                v1 = self.stack.pop()
                v2 = self.stack.pop()
                print "v1: %d v2: %d" % (v1,v2)
                if v2 > v1:
                    pc += rel
                else:
                    pc += 2
            elif (opcode == 7):
                rel = struct.unpack('B', prog[pc+1:pc+2])[0]
                pc += rel
            elif (opcode == 8):
                v1 = self.stack.pop()
                v2 = self.stack.pop()
                s = v1 * v2
                self.stack.append(s)
                pc += 1
            elif (opcode == 9):
                b = struct.unpack('B', prog[pc+1:pc+2])[0]
                self.stack.append(b)
                pc += 2
            elif (opcode == 10):
                print "drawrect"
                b = self.stack.pop()
                g = self.stack.pop()
                r = self.stack.pop()
                bot = self.stack.pop()
                right = self.stack.pop()
                top = self.stack.pop()
                left = self.stack.pop()
                color = (r,g,b)
                print "color:",color
                rect = pygame.Rect(left,top,right-left,bot-top)
                print "rect:",rect
                pygame.draw.rect(self.screen, color, rect)
                pc += 1
            else:
                print "unknown opcode:",opcode
                pc += 1
    

def evaluate_opcodes(opcodes, stack=[]):
    for op in opcodes:
        op.eval(stack)
    return stack

def print_stack(stack):
    print "stacksize:", len(stack)
    print "---"
    for o in stack:
        print o
    print "---"

def load_bytecode(fn):
    return open(fn,"rb").read()

class Opcode:
    def __str__(self):
        return "[-OP-]"

    def eval(self, stack):
        return 

class NumericLiteral(Opcode):
    def __init__(self, value):
        self.value = value

    def eval(self, stack):
        stack.append(self)

    def __str__(self):
        return "[%04d]" % self.value

class PlusOpcode(Opcode):
    def eval(self, stack):
        op1 = stack.pop().value
        op2 = stack.pop().value
        s = op1 + op2
        nl = NumericLiteral(s)
        stack.append(nl)

    def __str__(self):
        return "<SUM >"

class MinusOpcode(Opcode):
    def eval(self, stack):
        op1 = stack.pop().value
        op2 = stack.pop().value
        s = op1 - op2
        nl = NumericLiteral(s)
        stack.append(nl)

    def __str__(self):
        return "<DIFF>"

class MultiplyOpcode(Opcode):
    def eval(self, stack):
        op1 = stack.pop().value
        op2 = stack.pop().value
        s = op1 * op2
        nl = NumericLiteral(s)
        stack.append(nl)

    def __str__(self):
        return "<MULT>"

class IntegerDivideOpcode(Opcode):
    def eval(self, stack):
        op1 = stack.pop().value
        op2 = stack.pop().value
        s = op1 / op2
        nl = NumericLiteral(s)
        stack.append(nl)

    def __str__(self):
        return "<DIV >"

