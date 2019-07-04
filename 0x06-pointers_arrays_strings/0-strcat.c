#include "holberton.h"
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: the string that will be concatenated.
 *
 * @src: the main string.
 *
 *Return: *dest -> concatenated string.
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
