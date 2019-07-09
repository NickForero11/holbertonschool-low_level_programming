#include "holberton.h"
/**
 * _strchr -  Locates a character in a string.
 *
 * @s: the pointer to the strign that will be processed.
 *
 * @c: the character that will be located.
 *
 *Return: a pointer to the first occurrence of the character c in the string s
 *		  or NULL if the character is not found.
 *
 */
char *_strchr(char *s, char c)
{

	char *response;

	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		response = s;
	} else
	{
		response = '\0';
	}

	return (response);
}
