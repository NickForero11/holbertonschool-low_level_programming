#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 *@n: is the integer value that indicate the number of times
 *	  that the character \ should be printed.
 *
 * Return: Always void (no value)
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
