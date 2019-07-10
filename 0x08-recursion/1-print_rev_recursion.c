#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: the string that will be printed.
 *
 *Return: Always 0(Nothing).
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}