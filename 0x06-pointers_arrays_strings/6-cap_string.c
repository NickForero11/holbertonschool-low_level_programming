#include "holberton.h"
/**
 * cap_string - Capitalizes all words of a string.
 *
 * Separators of words: space, tabulation, new line, , ; . ! ? " ( ) { }
 *
 * @s: the string that will be procesed.
 *
 *Return: a char pointer to the capitalized string.
 *
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (
			(
				s[i] == ' '
				|| s[i] == '\t'
				|| s[i] == '\n'
				|| s[i] == ','
				|| s[i] == ';'
				|| s[i] == '.'
				|| s[i] == '!'
				|| s[i] == '?'
				|| s[i] == '"'
				|| s[i] == '('
				|| s[i] == ')'
				|| s[i] == '{'
				|| s[i] == '}'
			)	&& (s[i + 1] > 'a'
				&&	s[i + 1] < 'z')
		)
		{
			s[i + 1] -= 32;
		}
	}

	return (s);

}
