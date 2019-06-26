#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 *@n: is the integer value that will be checked.
 *
 *
 * Return: an integer in absolute value.
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}

	return (n);
}
