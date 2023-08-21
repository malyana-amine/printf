#include "main.h"

/**
 * printChar - prints c
 * @c: char
 * @count: nb char
 * Return: Void
 */
void printChar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
/**
 * printStr - Prints a null-terminated string and updates the character count.
 *
 * @str: Pointer to the string to be printed.
 * @count: Pointer to the character count.
 * Return: Void
 */
void printStr(char *str, int *count)
{
	while (*str)
		printChar(*str++, count);
}
/**
 * printInt - Prints an integer and updates the character count.
 *
 * @num: The integer to be printed.
 * @count: Pointer to the character count.
 * Return: Void
 */
void printInt(int num, int *count) 
{
    if (num < 0)
    {
        printChar('-', count);
        num = -1 * num;
    }
    if (num == 0)
        printChar('0', count);
    else if (num >= 10)
    {
        printInt(num / 10, count);
        printChar('0' + (num % 10), count);
    }
    else
        printChar('0' + num, count);
}


