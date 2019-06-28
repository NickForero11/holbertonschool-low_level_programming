#include "holberton.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always void (no value)
 *
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
