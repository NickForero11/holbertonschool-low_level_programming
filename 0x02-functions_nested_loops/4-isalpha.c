#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: ascii number of the character that will be checked.
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise
 *
 */
int _isalpha(int c)
{
	int r;

	r = 0;
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		r = 1;
	}

	return (r);
}
