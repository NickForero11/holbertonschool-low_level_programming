#include "holberton.h"

/**
 * _sqrt_recursion - Compute the natural square root of a number.
 *
 *@n: the number that will be used
 *
 * Return: Square root of a number.
 *		   if @n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (test_pow(n, 1));
	}
	else
	{
		return (-1);
}
}

/**
 * test_pow - try numbers until it find the aproximated square root of @n
 *
 * @n: Number to use for the square root
 *
 * @i: base number to try i*i
 *
 * Return: Square root of a number(exact or aproximated).
 *		   if n does not have a natural square root, return -1.
 */
int test_pow(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (((i + 1) * (i + 1)) > n)
	{
		return (-1);
	}
	else
	{
		return (test_pow(n, i + 1));
	}
}
