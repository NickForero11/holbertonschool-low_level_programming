#include "function_pointers.h"

/**
 * print_name - Takes a function to print an string and a string an do it.
 *
 *@name: the string(or char *) that will be printed.
 *
 *@f: the pointer to the function used to print @name.
 *
 * Return: Always nothing (void).
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0' && name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
