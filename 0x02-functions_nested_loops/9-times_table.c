#include "holberton.h"

/**
 * times_table -  the 9 times table, starting with 0.
 *
 * Return: Always void (no value)
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (j * i > 9)
			{
			_putchar(((j * i) / 10) + '0');
			_putchar(((j * i) % 10) + '0');
			}
			else
			{
			_putchar((j * i) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
				{
				_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');

			}
		}
	}
}
