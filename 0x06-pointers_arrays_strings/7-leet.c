#include "holberton.h"
/**
 * leet - Encodes a string into 1337.
 *		  Letters e and E should be replaced by 3.
 *		  Letters a and A should be replaced by 4.
 *		  Letters o and O should be replaced by 0.
 *		  Letters t and T should be replaced by 7.
 *		  Letters l and L should be replaced by 1.
 *
 * @s: the string that will be procesed.
 *
 *Return: a char pointer to the encoded string.
 *
 */
char *leet(char *s)
{
	int i;
	int j;

	char *base	=	"aAeEoOtTlL";
	char *coded	=	"4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; base[j] != '\0'; j++)
		{
			if (s[i] == base[j])
			{
				s[i] = coded[j];
			}
		}
	}

	return (s);
}
