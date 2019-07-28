#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 *@separator: the string to be printed between numbers.
 *
 *@n: the const integer number that specifies the number of arguments
 *	  that will receive the function..
 *
 * Return: Always nothing(void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	if (n != 0)
	{
		va_list parameters;
		char *string;
		unsigned int i;

		va_start(parameters, n);

		for (i = 0; i < n; ++i)
		{
			string = va_arg(parameters, char*);

			if (i == 0 || separator == NULL)
			{
				printf("%s", string);
			} else
			{
				printf("%s%s", separator, string == NULL ? "(nil)" : string);
			}
		}

		va_end(parameters);

		printf("\n");

	} else
	{
		printf("Error\n");
	}

}
