#include "holberton.h"
/**
 * _strlen_recursion - Compute the length of a string.
 *
 * @s: the string that will be processed.
 *
 *Return: the length of a string.
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

	if (*s != '\0')
	{
		return (1);
	}
}
