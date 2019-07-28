#include "variadic_functions.h"

/**
 * print_all - function that prints anything based on an format string input.
 *
 *@format: string with types of arguments passed to function.
 *
 *Return: Always nothing(void).
 */

void print_all(const char * const format, ...)
{
	va_list parameters;
	unsigned int i = 0;
	char *string;

	while (format != NULL)
	{
		va_start(parameters, format);
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%c", (char) va_arg(parameters, int));
					break;
				case 'i':
					printf("%d", va_arg(parameters, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(parameters, double));
					break;
				case 's':
					string = va_arg(parameters, char *);
					if (string == NULL)
					{
						string = "(nil)";
					}
					printf("%s", string);
					break;
				default:
					i++;
					continue;
			}
			if (*(format + (++i)) != '\0')
				printf(", ");
		}
	va_end(parameters);
	break;
}
	printf("\n");
}
