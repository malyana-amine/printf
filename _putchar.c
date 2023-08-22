#include <unistd.h>
#include "main.h"
/**
 * _putchar - types the character c to standard output
 * @c: printed char
 * Return: 1
 * On error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
