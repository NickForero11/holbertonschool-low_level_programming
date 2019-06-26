#include "holberton.h"

/**
 * print_to_98 - Prints all numbers from n to 98, followed by a new line.
 *
 * @n: is the integer number that is used as start point to print to 98.
 *
 * Return: Always void (no value)
 *
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		for ( ; n <= 98; n++)
		{
			if (n < 0)
			{
				print_negative_number(n);
			}
			else if (n == 98)
			{
				_putchar('9');
				_putchar('8');
			}
			else
			{
				print_number(n);
			}
		}
	}
	else
	{
		for ( ; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar('9');
				_putchar('8');
			}
			else
			{
			print_number(n);
			}
		}
	}

	_putchar('\n');
}

/**
 * print_number - Print any positive integer number with 3 digits or less.
 *
 * @n1: is the integer number that is going to be printed.
 *
 * Return: Always void (no value)
 *
 */

void print_number(int n1)
{

	int i;
	int dividers;

	if (n1 == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		dividers = 0;
		i = n1;
		while (i > 0)
		{
			i /= 10;
			dividers++;
		}
		if (dividers == 3)
		{
			_putchar((n1 / 100) + '0');
			n1 %= 100;
			dividers--;
		}
		if (dividers == 2)
		{
			_putchar((n1 / 10) + '0');
			n1 %= 10;
			dividers--;
		}
		if (dividers == 1)
		{
			_putchar(n1 + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_negative_number - Print negative integer number with 3 digits or less.
 *
 * @n2: is the integer number that is going to be printed.
 *
 * Return: Always void (no value)
 *
 */

void print_negative_number(int n2)
{

	_putchar('-');
	print_number(-1 * n2);

}
