#include "holberton.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 *@size: is the integer value that indicates the size of the triangle.
 *
 * Return: Always void (no value)
 *
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			print_chars(' ', size - i);
			print_chars('#', i);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_chars - Print (rep) times the character (c).
 *
 * @c: is the character that is going to be printed.
 *
 * @rep: is the integer number of the times that @c will be printed.
 *
 * Return: Always void (no value)
 *
 */

void print_chars(char c, int rep)
{
	 int i;

	for (i = 0; i < rep; i++)
	{
		_putchar(c);
	}
}
