#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always void (because it prints the string and not return it)
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
