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
	char *response;

	while (*s != '\0')
	{
		response = contains(accept, *s);
		if (*response != '\0')
		{
			response = s;
			break;
		}
		s++;
	}

	return (response);
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
char *contains(char *string, char ch)
{
	unsigned int i;
	char *response;

	for (i = 0; *(string + i) != '\0'; i++)
	{
		if (*(string + i) == ch)
		{
			break;
		}
	}
	response = string + i;

	return (response);
}
