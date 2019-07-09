#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: the string that will be processed.
 *
 * @accept: the prefix substring
 *
 *Return: the number of bytes in the initial segment of s
 *		  which consist only of bytes from accept.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int response;
	unsigned int count;

	response = 0;

	while (*s != '\0')
	{
		count = 0;
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				count++;
			}
		}
		if (count == 0 && response > 0)
		{
			break;
		}
		response += count;
		s++;
	}

	return (response);
}
