EMCC = /home/tsmaster/Dev/BDGRT/Emscripten/emsdk_portable/emscripten/master/emcc

# all tests
all: comments.exe fact.exe fact_decl.exe fib.exe include.exe many_call.exe num_output.exe parens.exe pong.exe precedence.exe vars.exe pong.html

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

precedence.o: TestCases/precedence.bdgrt
	python compiler.py TestCases/precedence.bdgrt precedence.o

sdl_main_loop.o: sdl_main_loop.c
	gcc -g -c sdl_main_loop.c

sdl_wrapper.o: sdl_wrapper.c
	gcc -g -c sdl_wrapper.c

support.o: support.c
	gcc -g -c support.c

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

precedence.exe: precedence.o support.o
	gcc -o precedence.exe support.o precedence.o

vars.exe: vars.o support.o
	gcc -o vars.exe support.o vars.o

# BC files
fact.bc: TestCases/fact.bdgrt
	python compiler.py TestCases/fact.bdgrt fact.bc

many_call.bc: TestCases/many_call.bdgrt
	python compiler.py TestCases/many_call.bdgrt many_call.bc

pong_web.bc: TestCases/pong_web.bdgrt
	python compiler.py TestCases/pong_web.bdgrt pong_web.bc

pong_web_bdg.bc: TestCases/pong_web_bdg.bdgrt
	python compiler.py TestCases/pong_web_bdg.bdgrt pong_web_bdg.bc

pong_web_bdg_sdl1.bc: TestCases/pong_web_bdg_sdl1.bdgrt
	python compiler.py TestCases/pong_web_bdg_sdl1.bdgrt pong_web_bdg_sdl1.bc

# HTML files
fact.html: fact.bc support.c
	emcc fact.bc support.c -o fact.html

many_call.html: many_call.bc support.c
	emcc many_call.bc support.c -o many_call.html

pong.html: pong_web.bc sdl_main_loop.c support.c
	${EMCC} sdl_main_loop.c support.c pong_web.bc \
    -s USE_SDL=2 -s USE_SDL_IMAGE=2 -s LEGACY_GL_EMULATION=1 -o pong.html


# Clean
clean:
	rm -rf *.o *.exe *.html *.bc *.js *.map
