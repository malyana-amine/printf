#include "main.h"
/**
 * printDec - function that prints decimal numbers
 * @d: prints integer
 * Descriptions: prints digit using _putchar
 * Return: size of text printed
 */
int printDec(va_list d)
{
	int lenght, pown, y, number, dig, x, counter = 0;

	x = va_arg(d, int);
	if (x != 0)
	{
		if (x < 0)
		{
			_putchar('-');
			counter++;
		}
		number = x;
		lenght = 0;
		while (number != 0)
		{
			number /= 10;
			lenght++;
		}
		pown = 1;
		for (y = 1; y <= lenght - 1; y++)
			pown *= 10;
		for (y = 1; y <= lenght; y++)
		{
			dig = x / pown;
			if (x < 0)
				_putchar((dig * -1) + 48);
			else
				_putchar(dig + '0');
			counter++;
			x -= dig * pown;
			pown /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (counter);
}
