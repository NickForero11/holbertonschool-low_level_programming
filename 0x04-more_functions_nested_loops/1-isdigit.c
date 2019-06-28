#include "holberton.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 *
 *@c: is the integer value that will be checked.
 *
 * Return: 1 if c is digit.
 *         0 otherwise.
 *
 */
int _isdigit(int c)
{
	int r;

	r = 0;

	if (c > 47 && c < 58)
	{
		r = 1;
	}

	return (r);
}
