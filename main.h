#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


/**
  * struct the_code - stuct
  * @tn: variable
  * @f: The function associated
  */
typedef struct the_code
{
char *tn;
int (*f)(va_list);
} codes;

int printChar(va_list c);
int printInt(va_list i);
int _putchar(char c);
int printDec(va_list d);
int printString(va_list s);
int printBin(va_list b);
int _printf(const char *format, ...);

#endif
