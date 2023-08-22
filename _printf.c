#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
  * findFunction - this function will find the that the right format
  * @format: iformat specifier
  * Return: NULL or any other function
  */
int (*findFunction(const char *format))(va_list)
{
	unsigned int y = 0;
	codes findfun[] = {
		{"c", printChar},
		{"s", printString},
		{"i", printInt},
		{NULL, NULL}
	};

	while (findfun[y].tn)
	{
		if (findfun[y].tn[0] == (*format))
			return (findfun[y].f);
		y++;
	}
	return (NULL);
}

/**
  * _printf - Recreation of printf
  * @format: format specifier char, string, int
  * Return: the string size
  */
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);
	unsigned int x = 0, count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[x])
	{
		while (format[x] != '%' && format[x])
		{
			_putchar(format[x]);
			count++;
			x++;
		}
		if (format[x] == '\0')
			return (count);
		f = findFunction(&format[x + 1]);
		if (f != NULL)
		{
			count += f(args);
			x += 2;
			continue;
		}
		if (!format[x + 1])
			return (-1);
		_putchar(format[x]);
		count++;
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(args);
	return (count);
}
