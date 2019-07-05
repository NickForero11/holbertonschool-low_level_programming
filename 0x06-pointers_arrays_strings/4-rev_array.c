#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: Is the integer pointer or the integers array that will be reversed.
 *
 * @n: Is the number of elements of the array.
 *
 * Return: Always void (no value)
 *
 */
void reverse_array(int *a, int n)
{
	int tmp[n];
	int i;

	n--;

	for (i = 0; i <= n; i++)
	{
		tmp[i] = a[n - i];
	}
	for (i = 0; i <= n; i++)
	{
		a[i] = tmp[i];
	}

}
