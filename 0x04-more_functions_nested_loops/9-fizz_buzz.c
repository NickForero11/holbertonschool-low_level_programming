#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 followed by a new line
 *			   with some changes in certain cases:
 *			   For multiples of three print Fizz instead of the number.
 *			   For the multiples of five print Buzz.
 *			   For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}

		if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}

		if ((i % 5 != 0) && (i % 3 != 0))
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
