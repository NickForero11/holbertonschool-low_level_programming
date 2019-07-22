#include "holberton.h"
/**
 * factorial - Compute the factorial of a given number.
 *
 * @n: the factorial number that will be calculated.
 *
 *Return: the factorial of a given int number.
 *		  if n < 0, return -1 to indicate an error.
 *		  if n == 0, return 1.
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
