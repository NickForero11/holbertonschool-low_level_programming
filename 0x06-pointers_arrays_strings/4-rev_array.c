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
	int tmp;
	int i;

	n--;

	for (i = 0; i <= n; i++)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		n--;
	}

}
