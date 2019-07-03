#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Prints n elements of an array of integers
 *				 followed by a new line.
 *
 * @a: is the pointer to the array of integers to be printed.
 *
 * @n: is the integer that indicates the number of elements to be printed.
 *
 * Return: Always void (no value)
 *
 */

void print_array(int *a, int n)
{
	int digits;

	digits = 0;
	while (digits < n)
	{
		if (digits != n - 1)
		{
			printf("%d, ", *(a + digits));
		} else
		{
			printf("%d", *(a + digits));
		}
		digits++;
	}
	putchar('\n');
}
