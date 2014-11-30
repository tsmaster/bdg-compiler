import sys, pygame
from pygame.locals import *
import interpreter

pygame.init()

size = width, height = 640, 480
speed = [2, 3]
black = 0, 0, 0

screen = pygame.display.set_mode(size)
ball = pygame.image.load("ball.png").convert()
ballrect = ball.get_rect()

clock = pygame.time.Clock()

vm = interpreter.VM(200, 12)
vm.screen = screen

init_prog = interpreter.load_bytecode("init_prog.bdgc")
main_prog = interpreter.load_bytecode("main_prog.bdgc")

stack = []
ops = [interpreter.NumericLiteral(3),
       interpreter.NumericLiteral(17),
       interpreter.IntegerDivideOpcode()]

interpreter.evaluate_opcodes(ops, stack)
interpreter.print_stack(stack)

vm.eval_bytecode(init_prog)

print "---"
interpreter.print_stack(vm.stack)
print vm.memory

while 1:
    clock.tick(30)
    for event in pygame.event.get():
        if ((event.type == pygame.QUIT) or 
            (event.type == KEYDOWN and event.key == K_ESCAPE)):
            sys.exit()

    vm.eval_bytecode(main_prog)
    """
    ballrect = ballrect.move(speed)
    if ballrect.left < 0 or ballrect.right > width:
        speed[0] = -speed[0]
    if ballrect.top < 0 or ballrect.bottom > height:
        speed[1] = -speed[1]

    screen.fill(black)
    screen.blit(ball, ballrect)"""
    pygame.display.flip()

    #exit(-1)

