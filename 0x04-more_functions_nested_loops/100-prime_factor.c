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
	long i;
	long factor;
	long number;

	number = 612852475143;
	factor = 2;
	while (factor <= number)
	{
		if (number % factor == 0)
		{
			i = factor;
			number /= factor;

		} else
		{
			factor++;
		}
	}
	printf("%ld\n", i);

	return (0);
}
