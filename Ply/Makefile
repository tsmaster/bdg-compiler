EMCC = /home/tsmaster/Dev/BDGRT/Emscripten/emsdk_portable/emscripten/master/emcc

# all tests
all: comments.exe fact.exe fact_decl.exe fib.exe include.exe many_call.exe num_output.exe parens.exe pong.exe precedence.exe vars.exe pong.html fact.html fib.html many_call.html num_output.html pong_adv.exe pong_adv.html test_const.exe test_mult.exe test_void_func.exe test_float_func.exe

#obj files (in alphabetical order, please)

comments.o: TestCases/comments.bdgrt
	python compiler.py TestCases/comments.bdgrt comments.o

fact.o: TestCases/fact.bdgrt
	python compiler.py TestCases/fact.bdgrt fact.o

fact_decl.o: TestCases/fact.bdgrt
	python compiler.py TestCases/fact_decl.bdgrt fact_decl.o

fib.o: TestCases/fib.bdgrt
	python compiler.py TestCases/fib.bdgrt fib.o

include.o: TestCases/include.bdgrt TestCases/conio.bdgrt
	python compiler.py TestCases/include.bdgrt include.o

many_call.o: TestCases/many_call.bdgrt  
	python compiler.py TestCases/many_call.bdgrt many_call.o

num_output.o: TestCases/num_output.bdgrt  
	python compiler.py TestCases/num_output.bdgrt num_output.o

parens.o: TestCases/parens.bdgrt
	python compiler.py TestCases/parens.bdgrt parens.o

pong.o: TestCases/pong.bdgrt
	python compiler.py TestCases/pong.bdgrt pong.o

pong_adv.o: TestCases/pong_adv.bdgrt
	python compiler.py TestCases/pong_adv.bdgrt pong_adv.o

precedence.o: TestCases/precedence.bdgrt
	python compiler.py TestCases/precedence.bdgrt precedence.o

sdl_main_loop.o: sdl_main_loop.c
	gcc -g -c sdl_main_loop.c

sdl_wrapper.o: sdl_wrapper.c
	gcc -g -c sdl_wrapper.c

support.o: support.c
	gcc -g -c support.c

test_class.o: TestCases/test_class.bdgrt
	python compiler.py TestCases/test_class.bdgrt test_class.o

test_const.o: TestCases/test_const.bdgrt
	python compiler.py TestCases/test_const.bdgrt test_const.o

test_mult.o: TestCases/test_mult.bdgrt
	python compiler.py TestCases/test_mult.bdgrt test_mult.o

test_float_func.o: TestCases/test_float_func.bdgrt
	python compiler.py TestCases/test_float_func.bdgrt test_float_func.o

test_void_func.o: TestCases/test_void_func.bdgrt
	python compiler.py TestCases/test_void_func.bdgrt test_void_func.o

vars.o: TestCases/vars.bdgrt
	python compiler.py TestCases/vars.bdgrt vars.o


# exe files (in alphabetical order, please)
comments.exe: comments.o support.o
	gcc -o comments.exe support.o comments.o

fact.exe: fact.o support.o
	gcc -o fact.exe support.o fact.o

fact_decl.exe: fact_decl.o support.o
	gcc -o fact_decl.exe support.o fact_decl.o

fib.exe: fib.o support.o
	gcc -o fib.exe support.o fib.o

include.exe: include.o support.o
	gcc -o include.exe support.o include.o

many_call.exe: many_call.o support.o
	gcc -o many_call.exe support.o many_call.o

num_output.exe: num_output.o support.o
	gcc -o num_output.exe support.o num_output.o

parens.exe: parens.o support.o
	gcc -o parens.exe support.o parens.o

pong.exe: pong.o sdl_wrapper.o support.o
	gcc -o pong.exe pong.o support.o sdl_wrapper.o -lSDL2 -lm

pong_adv.exe: pong_adv.o sdl_wrapper.o support.o
	gcc -o pong_adv.exe pong_adv.o support.o sdl_wrapper.o -lSDL2 -lm

precedence.exe: precedence.o support.o
	gcc -o precedence.exe support.o precedence.o

test_class.exe: test_class.o support.o
	gcc -o test_class.exe support.o test_class.o

test_const.exe: test_const.o support.o
	gcc -o test_const.exe support.o test_const.o

test_mult.exe: test_mult.o support.o
	gcc -o test_mult.exe support.o test_mult.o

test_float_func.exe: test_float_func.o support.o
	gcc -o test_float_func.exe support.o test_float_func.o

test_void_func.exe: test_void_func.o support.o
	gcc -o test_void_func.exe support.o test_void_func.o

vars.exe: vars.o support.o
	gcc -o vars.exe support.o vars.o

# BC files
fact.bc: TestCases/fact.bdgrt
	python compiler.py TestCases/fact.bdgrt fact.bc

many_call.bc: TestCases/many_call.bdgrt
	python compiler.py TestCases/many_call.bdgrt many_call.bc

pong_web.bc: TestCases/pong_web.bdgrt
	python compiler.py TestCases/pong_web.bdgrt pong_web.bc

# HTML files
fact.html: fact.bc support.c
	emcc fact.bc support.c -o fact.html

many_call.html: many_call.bc support.c
	emcc many_call.bc support.c -o many_call.html

pong.html: pong_web.bc sdl_main_loop.c support.c
	${EMCC} sdl_main_loop.c support.c pong_web.bc \
    -s USE_SDL=2 -s USE_SDL_IMAGE=2 -s LEGACY_GL_EMULATION=1 -o pong.html

pong_adv.html: pong_adv.bc sdl_main_loop.c support.c
	${EMCC} sdl_main_loop.c support.c pong_adv.bc \
    -s USE_SDL=2 -s USE_SLD_IMAGE=2 -s LEGACY_GL_EMULATION=1 -o pong_adv.html

# Clean
clean:
	rm -rf *.o *.exe *.html *.bc *.js *.map
