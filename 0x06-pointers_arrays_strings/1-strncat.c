#include "holberton.h"
/**
 * _strncat - Concatenates two strings.
 *			  It will use at most n bytes from src.
 *		      @src doesn't need to be null-terminated
 *			  if it contains n or more bytes.
 *
 * @dest: the string that will be concatenated.
 *
 * @src: the main string.
 *
 * @n: the integer that delimits the number of chars of @src that will be used.
 *
 *Return: *dest -> concatenated string.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
