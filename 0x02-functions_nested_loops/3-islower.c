#include "holberton.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: ascii number of the character that will be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	int r;

	r = 0;
	if (c > 96 && c < 123)
	{
		r = 1;
	}

	return (r);
}
