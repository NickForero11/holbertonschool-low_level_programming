#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: The char pointer of the string that will be printed.
 *
 * Return: Always void (no value)
 *
 */
void print_rev(char *s)
{
	int digits;

	digits = 0;
	while (*(s + digits) != '\0')
	{
		digits++;
	}
	digits--;
	while (digits >= 0)
	{
		_putchar(*(s + digits));
		digits--;
	}
	_putchar('\n');
}
