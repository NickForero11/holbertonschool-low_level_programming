#include "holberton.h"

/**
 * _isupper - Checks for uppercase character.
 *
 *@c: is the integer value that will be checked.
 *
 * Return: 1 if c is uppercase.
 *         0 otherwise.
 *
 */
int _isupper(int c)
{
	int r;

	r = 0;

	if (c > 64 && c < 91)
	{
		r = 1;
	}

	return (r);
}
