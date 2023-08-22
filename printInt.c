#include "main.h"
/**
 * printInt - prints one integer
 * @i: the integer to print
 * Descriptions: prints an int with _putchar
 * Return: Integer
 */
int printInt(va_list i)
{
	int lenght, pown, j, dig, x, counter = 0, number;

	x = va_arg(i, int);

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
		for (j = 1; j <= lenght - 1; j++)
			pown *= 10;
		for (j = 1; j <= lenght; j++)
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
