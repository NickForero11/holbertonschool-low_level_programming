#include "holberton.h"
/**
 * _strcmp - Compares two strings.
 *
 * @s1: the string that will be compared.
 *
 * @s2: the comparative string.
 *
 *Return: an int with the diference between the ascii value of the strings.
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && !(*s1 == '\0' && *s2 == '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
