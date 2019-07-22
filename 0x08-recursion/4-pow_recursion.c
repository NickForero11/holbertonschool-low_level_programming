#include "holberton.h"

/**
 * _pow_recursion - raise x to the power of y.
 *
 *@x: is the first integer value that will be the base.
 *@y: is the second integer value that will be the exponent.
 *
 * Return: the value of x raised to the power of y.
 *		   if y < 0, return -1.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
