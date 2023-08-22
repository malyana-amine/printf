#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printChar - Prints char
 * @c: characher print
 * Return: 1
 *
 */
int printChar(va_list c)
{
	unsigned char machar;

	machar = va_arg(c, int);
	_putchar(machar);
	return (1);
}
/**
 * printPorcentage - prints the percentage
 * Return: 1
 */
int printPorcentage(void)
{
	_putchar('%');
	return (1);
}
