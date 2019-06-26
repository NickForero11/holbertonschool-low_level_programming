#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 *@n: is the integer number that will be used.
 *
 * Return: the last digit of the number n.
 *
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = -1 * n;
	}
	r = n % 10;
	_putchar('0' + r);

	return (r);
}
