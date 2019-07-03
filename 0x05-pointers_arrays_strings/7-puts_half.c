#include "holberton.h"

/**
 * puts_half - Print the second half of a string
 *			   If the number of characters is odd
 *			   The function should print from the position: (length - 1) / 2
 *			   Else, the function should print from the position: length / 2
 *
 * @str: The char pointer of the string that will be printed.
 *
 * Return: Always void (no value)
 *
 */
void puts_half(char *str)
{
	int digits;

	digits = 0;
	while (*(str + digits) != '\0')
	{
		digits++;
	}
	if (digits % 2 == 0)
	{
		digits /= 2;
	} else
	{
		digits--;
		digits /= 2;
	}
	while (*(str + digits) != '\0')
	{
		_putchar(*(str + digits));
		digits++;
	}
	_putchar('\n');
}
