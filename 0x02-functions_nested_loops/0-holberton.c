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
	int i;

	for (i = 0; i < 9 ; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');

	return (0);
}
