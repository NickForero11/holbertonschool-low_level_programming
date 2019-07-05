#include "holberton.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @s: the string that will be procesed.
 *
 *Return: a char pointer to the uppercased string.
 *
 */
char *string_toupper(char *s)
{
	int i;
	char *response = s;

	for (i = 0; response[i] != '\0'; i++)
	{
		if (response[i] >= 'a' && response[i] < 'z')
		{
			response[i] -= 32;
		}
	}
	return (s);
}
