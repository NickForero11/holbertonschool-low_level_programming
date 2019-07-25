#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_op_func - Searches for an integer on an array
 *			   using a custom comparator function.
 *
 *@s: the operator passed as argument to the program.
 *
 * Return: a pointer to the function that corresponds to
 *		   the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	if (s != NULL)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
		int i;

		i = 0;

		while (i != 5 && *(ops[i].op) != *(s))
		{
			i++;
		}

		return (i == 6 ? NULL : ops[i].f);
	}
	return (NULL);
}
