#include "holberton.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The char pointer of the string that will be reversed.
 *
 * Return: Always void (no value)
 *
 */
void rev_string(char *s)
{
	int digits;
	char tmp;
	int i;

	digits = 0;

	while (*(s + digits) != '\0')
	{
		digits++;
	}
	digits--;
	for (i = 0; i < digits; i++)
	{
		tmp = *(s + digits);
		*(s + digits) = *(s + i);
		*(s + i) = tmp;
		digits--;
	}
}
