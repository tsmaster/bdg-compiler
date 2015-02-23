#include <stdio.h>

// compile this file
// gcc -g -c support.c
// link in the LLVM-generated code
// gcc -o foo.exe putchar.o test.o

void print_integer(int x) {
  printf("%d", x);
}

void print_char(int x) {
  printf("%c", x);
}

void print_line() {
  printf("\n");
}  

void print_float(float x) {
  printf("%f", x);
}
