#include "variadic_functions.h"

/**
 * sum_them_all - Computes the sum of all its parameters.
 *
 *@n: the const integer number that specifies the number of arguments
 *	  that will receive the function..
 *
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	int result;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	result = 0;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(parameters, int);
	}

	va_end(parameters);

	return (result);

}
