#include <stdio.h>

// gcc -shared -fPIC -o putchar.so putchar.c

int putchari(int x) {
   putchar((char)x); return 0;
}


// gcc -g -c putchar.c
// gcc -o foo.exe putchar.o test.o
