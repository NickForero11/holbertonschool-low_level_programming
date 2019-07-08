#include "holberton.h"
/**
 * _memcpy -  Copies n bytes from memory area src to memory area dest.
 *
 * @src: the pointer to the memory area that will be copied.
 *
 * @dest: the pointer to the memory area that will receive the copy.
 *
 * @n: the number of bytes of the memory area that will be copied.
 *
 *Return: a char pointer to the memory area dest.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
