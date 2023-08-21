#include "main.h"

/**
 * _printf - function that creates a new printf
 *
 *  @format: the format specifier such as char, string, int
 *
 * Return: NULL or any other function
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				printChar(va_arg(args, int), &count);
			else if (*format == 's')
				printStr(va_arg(args, char*), &count);
			else if (*format == 'd' || *format == 'i')
				printInt(va_arg(args, int), &count);
			else if (*format == '%')
				printChar('%', &count);
		}
		else
			printChar(*format, &count);
		format++;
	}

	va_end(args);
	return (count);
}
