
all: fact.exe fib.exe fact_decl.exe many_call.exe num_output.exe vars.exe pong.exe

support.o: support.c
	gcc -g -c support.c

sdl_wrapper.o: sdl_wrapper.c
	gcc -g -c sdl_wrapper.c

fact.o: TestCases/fact.bdgrt
	python compiler.py TestCases/fact.bdgrt fact.o

fact_decl.o: TestCases/fact.bdgrt
	python compiler.py TestCases/fact_decl.bdgrt fact_decl.o

fib.o: TestCases/fib.bdgrt
	python compiler.py TestCases/fib.bdgrt fib.o

many_call.o: TestCases/many_call.bdgrt  
	python compiler.py TestCases/many_call.bdgrt many_call.o

num_output.o: TestCases/num_output.bdgrt  
	python compiler.py TestCases/num_output.bdgrt num_output.o

pong.o: TestCases/pong.bdgrt
	python compiler.py TestCases/pong.bdgrt pong.o

vars.o: TestCases/vars.bdgrt
	python compiler.py TestCases/vars.bdgrt vars.o

comments.o: TestCases/comments.bdgrt
	python compiler.py TestCases/comments.bdgrt comments.o

fact.exe: fact.o support.o
	gcc -o fact.exe support.o fact.o

fib.exe: fib.o support.o
	gcc -o fib.exe support.o fib.o

fact_decl.exe: fact_decl.o support.o
	gcc -o fact_decl.exe support.o fact_decl.o

many_call.exe: many_call.o support.o
	gcc -o many_call.exe support.o many_call.o

num_output.exe: num_output.o support.o
	gcc -o num_output.exe support.o num_output.o

pong.exe: pong.o sdl_wrapper.o support.o
	gcc -o pong.exe pong.o support.o sdl_wrapper.o -lSDL2 -lm

vars.exe: vars.o support.o
	gcc -o vars.exe support.o vars.o

comments.exe: comments.o support.o
	gcc -o comments.exe support.o comments.o

clean:
	rm -rf *.o *.exe
