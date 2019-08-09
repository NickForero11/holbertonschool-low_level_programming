#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n:		the pointer to the number that will be "bit setted".
 *
 * @index:	is the index, starting from 0 of the bit you want to set as 0.
 *
 * Return:	1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int switcher;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	switcher = 1 << index;
	*n = *n & (~switcher);

	return (1);
}
