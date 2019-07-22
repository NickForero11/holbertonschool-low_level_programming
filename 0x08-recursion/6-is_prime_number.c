#include "holberton.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 *
 *@n: the number that will be checked
 *
 * Return: 1 if the number is prime.
 *		   0 otherwise.
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (test_prime(n, 2));
	}
	else
	{
		return (0);
}
}

/**
 * test_prime - try numbers until it find the aproximated square root of @n
 *
 * @n: Number to use for the square root
 *
 * @i: base number to try i*i
 *
 * Return: Square root of a number(exact or aproximated).
 */
int test_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (test_prime(n, i + 1));
	}
}
