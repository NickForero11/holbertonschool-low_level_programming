#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 *@separator: the string to be printed between numbers.
 *
 *@n: the const integer number that specifies the number of arguments
 *	  that will receive the function..
 *
 * Return: Always nothing(void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	if (n != 0)
	{
		va_list parameters;
		int num;
		unsigned int i;

		va_start(parameters, n);

		for (i = 0; i < n; ++i)
		{
			num = va_arg(parameters, int);

			if (i == 0 || separator == NULL)
			{
				printf("%d", num);
			} else
			{
				printf("%s%d", separator, num);
			}
		}

		va_end(parameters);

		printf("\n");

	} else
	{
		printf("Error\n");
	}

}
