#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n:		the pointer to the number that will be "bit setted".
 *
 * @index:	is the index, starting from 0 of the bit you want to set as 1.
 *
 * Return:	1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int switcher;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	switcher = 1 << index;
	*n = *n | switcher;

	return (1);
}
