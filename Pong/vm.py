import struct

initProg = open("init_prog.bdgc", "rb").read()
mainProg = open("main_prog.bdgc", "rb").read()

def interpret_bytecode(prog):
    pc = 0
    while pc < len(prog):
        b = prog[pc]
        opcode = struct.unpack('B', b)[0]
        print "%04d - %d" % (pc, opcode)

        if (opcode == 1):
            print "literal short"
            val = struct.unpack('h', prog[pc+1:pc+3])[0]
            print val
            pc += 3
        elif (opcode == 2):
            print "store"
            loc = struct.unpack('B', prog[pc+1:pc+2])[0]
            print loc
            pc += 2
        elif (opcode == 3):
            print "load"
            loc = struct.unpack('B', prog[pc+1:pc+2])[0]
            print loc
            pc += 2
        elif (opcode == 4):
            print "add"
            pc += 1
        elif (opcode == 5):
            print "dup"
            pc += 1
        elif (opcode == 6):
            print "jumpgt"
            rel = struct.unpack('B', prog[pc+1:pc+2])[0]
            print rel
            pc += 2
        elif (opcode == 7):
            print "jump"
            rel = struct.unpack('B', prog[pc+1:pc+2])[0]
            print rel
            pc += 2
        elif (opcode == 8):
            print "mul"
            pc += 1
        elif (opcode == 9):
            print "literal uint8"
            b = struct.unpack('B', prog[pc+1:pc+2])[0]
            print b
            pc += 2
        elif (opcode == 10):
            print "drawrect"
            pc += 1
        else:
            print "unknown opcode:",opcode
            pc += 1


interpret_bytecode(initProg)
print
interpret_bytecode(mainProg)
