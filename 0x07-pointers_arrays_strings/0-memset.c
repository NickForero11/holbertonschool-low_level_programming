#include "holberton.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *			 with the constant byte b.
 *
 * @s: the pointer to the memory area that will be procesed.
 *
 * @b: the constant byte that will fill the s memory area.
 *
 * @n: the number of bytes of the memory area that will be filled.
 *
 *Return: a char pointer to the memory area s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
