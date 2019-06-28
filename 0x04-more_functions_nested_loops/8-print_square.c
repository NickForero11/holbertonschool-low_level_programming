#include "holberton.h"

/**
 * print_square - Prints a square, followed by a new line.
 *
 *@size: is the integer value that indicates the size of the square.
 *
 * Return: Always void (no value)
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
