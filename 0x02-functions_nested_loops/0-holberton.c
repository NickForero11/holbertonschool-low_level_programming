#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char msg[] = "Holberton";
	int size_msg = sizeof(msg) / sizeof(char);
	int i;

	for (i = 0; i < size_msg ; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');

	return (0);
}
