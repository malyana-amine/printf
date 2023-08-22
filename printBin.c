#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
* printBin - fucntion that converts to binary
* @b: the number decimal
* Return: print character number
*/
int printBin(va_list b)
{
	int counter = 0;
	unsigned int lenght, pown, number, y, x, dig;

	y = va_arg(b, unsigned int);
	if (y != 0)
	{
		number = y;
		lenght = 0;
		while (number != 0)
		{
			number /= 2;
			lenght++;
		}
		pown = 1;
		for (x = 1; x <= lenght - 1; x++)
			pown *= 2;
		for (x = 1; x <= lenght; x++)
		{
			dig = y / pown;
			_putchar(dig + '0');
			counter++;
			y -= dig * pown;
			pown /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (counter);
}
