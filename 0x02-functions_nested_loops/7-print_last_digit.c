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
	
	r = n % 10;
	if (r < 0)
	{
		r *= (-1);
	}
	_putchar('0' + r);

	return (r);
}
