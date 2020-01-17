#include "search_algos.h"

/**
 * print_array - Prints the content of an integer array.
 *
 * @array: The integer array that will be processed.
 *
 * @left: The starting element of the array.
 *
 * @right: The ending element of the array.
 *
 * Return: Always nothing (void).
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t iterator;

	printf("Searching in array: ");
	for (iterator = left; iterator < right; iterator++)
	{
		printf("%d%s", array[iterator], iterator < right - 1 ? ", " : "\n");
	}
}

/**
 * binary_search_driver -	Finds an integer inside an array
 *					using the binary search algorithm.
 *
 * @array: The integer array that contains the data.
 *
 * @left: The left limit of the array.
 *
 * @right: The right limit of the array.
 *
 * @value: The integer value that will be searched.
 *
 * Return:	The first index where value is located, otherwise -1.
 */

int binary_search_driver(int *array, size_t left, size_t right, int value)
{
	if (right > left)
	{
		size_t middle;

		middle = left + ((right - left - 1) / 2);

		print_array(array, left, right);


		if (right - left == 1)
		{
			if (array[middle] == value)
			{
				return (middle);
			}
		}
		else if (value <= array[middle])
		{
			return (binary_search_driver(array, left, middle + 1, value));
		}
		else
		{
			return (binary_search_driver(array, middle + 1, right, value));
		}
	}

	return (-1);
}

/**
 * binary_search -	Finds an integer inside an array
 *					using the binary search algorithm.
 *
 * @array: The integer array that contains the data.
 *
 * @size: The number of elements in the array that will be traversed.
 *
 * @value: The integer value that will be searched.
 *
 * Return:	The first index where value is located, otherwise -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL && size > 0)
	{
		return (binary_search_driver(array, 0, size, value));
	}

	return (-1);
}
