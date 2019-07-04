#include "holberton.h"
/**
 * _strncpy - Copies the string pointed to by src,
 *			 including the terminating null byte (\0),
 *			 to the buffer pointed to by dest.
 *			 It will use at most n bytes from src.
 *		     @src doesn't need to be null-terminated
 *			 if it contains n or more bytes.
 *
 * @dest: copie of the string
 *
 * @src: origin of the string
 *
 * @n: the integer that delimits the number of chars of @src that will be used.
 *
 *Return: *dest -> copied string.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
