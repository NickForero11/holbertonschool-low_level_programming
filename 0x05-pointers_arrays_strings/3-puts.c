#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: The char pointer of the string that will be printed.
 *
 * Return: Always void (no value)
 *
 */
void _puts(char *str)
{
	int digits;

	digits = 0;
	while (*(str + digits) != '\0')
	{
		_putchar(*(str + digits));
		digits++;
	}
	_putchar('\n');
}
