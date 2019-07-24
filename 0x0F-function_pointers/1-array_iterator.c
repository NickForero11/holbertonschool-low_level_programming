#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *					on each element of an array.
 *
 *@array: the integer pointer OR integer array used as base of @action.
 *
 *@size: the size of @array.
 *
 *@action: the pointer to the function used on every element of @array.
 *
 * Return: Always nothing (void).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
