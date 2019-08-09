#include "holberton.h"

/**
 * flip_bits -	Computes the number of bits that you would need to flip
 *				to get from one number to another.
 *
 * @n:		the base number that will be checked.
 *
 * @m:		the target number that want to reach.
 *
 * Return:	the number of bits that you would need to flip @n to reach @m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter;

	counter = 0;

	while (n != 0 || m != 0)
	{
		counter += (n & 1) ^ (m & 1);
		n = n >> 1;
		m = m >> 1;
	}

	return (counter);
}
