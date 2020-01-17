#include "search_algos.h"

/**
 * linear_search -	Finds an integer inside an array
 *					using the linear search algorithm.
 *
 * @array: The integer array that contains the data.
 *
 * @size: The number of elements in the array that will be traversed.
 *
 * @value: The integer value that will be searched.
 *
 * Return:	The first index where value is located, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
