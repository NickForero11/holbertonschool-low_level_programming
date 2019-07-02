#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 *@a: is the first integer pointer that will be swapped.
 *@b: is the second integer pointer that will be swapped.
 *
 * Return: Always void (no value)
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
