#ifndef MAIN
#define MAIN


#include <stdio.h>
#include <stdarg.h>

void printChar(char c, int *count);
void printString(char *str, int *count);
void printInt(int num, int *count);
int _printf(const char *format, ...);

#endif
