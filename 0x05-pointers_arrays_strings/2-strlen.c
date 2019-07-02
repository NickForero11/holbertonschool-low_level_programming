#include "holberton.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The char pointer of the string that will be checked
 *
 * Return: the length of a string in a integer value.
 *
 */
int _strlen(char *s)
{
	int digits;

	digits = 0;
	while (*(s + digits) != '\0')
	{
		digits++;
	}
	return (digits);
}
