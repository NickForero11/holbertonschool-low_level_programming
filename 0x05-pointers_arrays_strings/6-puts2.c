#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string, followed by a new line.
 *
 * @str: The char pointer of the string that will be printed.
 *
 * Return: Always void (no value)
 *
 */
void puts2(char *str)
{
	int digits;

	digits = 0;
	while (*(str + digits) != '\0')
	{
		if (digits % 2 == 0)
		{
			_putchar(*(str + digits));
		}
		digits++;
	}
	_putchar('\n');
}
