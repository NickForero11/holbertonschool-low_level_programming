#include "holberton.h"
/**
 *is_palindrome - Checks if a string is equal to its reverse.
 *
 *@s: The string that will be checked.
 *
 *Return: 1 if is palindrome.
 *		  0 otherwise.
 */
int is_palindrome(char *s)
{
	return (check_char(s, s + _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - Compute the length of a string.
 *
 * @s: the string that will be processed.
 *
 *Return: the length of a string.
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

	if (*s != '\0')
	{
		return (1);
	}
}

/**
 *check_char - checks the if the first and last chars of a string are equals
 *			   then shrink those chars of the string and recheck until
 *			   it comes to the center of the string.
 *@start: first char of the string.
 *@end: last char of the string.
 *Return: 1 if the chars are equal( palindrome ).
 *		  0 if the chars are not equal.
 */
int check_char(char *start, char *end)
{
	if (*start != *end)
	{
		return (0);
	}

	if (start != end && end != start + 1)
	{
		return (check_char(start + 1, end - 1));
	}
	return (1);
}
