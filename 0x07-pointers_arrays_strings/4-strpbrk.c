#include "holberton.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: the string that will be processed.
 *
 * @accept: the string with the search characters.
 *
 *Return: a pointer to the byte in s that matches one of the bytes in accept,
 *		  or NULL if no such byte is found.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int response;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		response = contains(accept, *(s + i));
		if (response == 1)
		{
			return (s + i);
		}
	}
	return ('\0');
}

/**
 * contains - check if some char is inside an array.
 *
 * @string: the string that will be processed.
 *
 * @ch: the that will be searched.
 *
 *Return: a pointer to the char if the char is inside the string or
 *a NULL pointer if not.
 *
*/
int contains(char *string, char ch)
{
	unsigned int i;

	for (i = 0; *(string + i) != '\0'; i++)
	{
		if (*(string + i) == ch)
		{
			return (1);
		}
	}

	return (0);
}
