#include "holberton.h"

/**
 * get_bit - Computes the value of a bit at a given index.
 *
 * @n:		the number that contains the bit that will be searched.
 *
 * @index:	is the index, starting from 0 of the bit you want to get.
 *
 * Return:	the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	n = n >> index;

	return (n & 1);
}
