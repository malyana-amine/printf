#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printString - prints the string c
 * @s: the printed string
 * Return: 1
 */
int printString(va_list s)
{
	char *thestring;
	int  n = 0;

	thestring = va_arg(s, char *);
	if (thestring == NULL)
		thestring = "(null)";
	while (thestring[n])
	{
		_putchar(thestring[n]);
		n++;
	}
	return (n);
}
