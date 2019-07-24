#include "function_pointers.h"

/**
 * int_index - Searches for an integer on an array
 *			   using a custom comparator function.
 *
 *@array: the integer pointer OR integer array that will be processed.
 *
 *@size: the size of @array.
 *
 *@cmp: the pointer to the function used to compare every element of @array.
 *
 * Return: index of the first element for which @cmp function doesn't return 0.
 *		   -1 if no element matches or size is equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{

		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
