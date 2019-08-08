#include "holberton.h"

/**
 * print_binary -  Prints the binary representation of a number.
 *
 * @n:	the number that will be printed in a binary representation.
 *
 * Return:	always nothing(void).
 */

void print_binary(unsigned long int n)
{
	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
	}
	putchar('0' + (n & 1));
}
