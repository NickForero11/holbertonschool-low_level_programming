#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b:	the string (char *) that contains the binary number
 *		that will be converted.
 *
 * Return:	the converted number, or 0 if
 *			there is one or more chars in the string b that is not 0 or
 *			b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int response;
	unsigned int exponent;
	int len;

	if (b == NULL)
	{
		return (0);
	}

	response = 0;

	for (len = 0; b[len + 1] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	for (exponent = 0; len != -1; len--)
	{
		response += (b[len] - 48) << exponent;
		exponent++;
	}

	return (response);
}
