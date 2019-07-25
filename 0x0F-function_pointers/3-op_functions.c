#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - Adds two integer numbers.
 *
 *@a: the first integer that will be processed.
 *
 *@b: the second integer that will be processed.
 *
 * Return: the sum of @a and @b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two integer numbers.
 *
 *@a: the first integer that will be processed.
 *
 *@b: the second integer that will be processed.
 *
 * Return: the difference of @a and @b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integer numbers.
 *
 *@a: the first integer that will be processed.
 *
 *@b: the second integer that will be processed.
 *
 * Return: the product of @a and @b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integer numbers.
 *
 *@a: the first integer that will be processed.
 *
 *@b: the second integer that will be processed.
 *
 * Return: the integer division of @a by @b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Compute the remainder of an integer division.
 *
 *@a: the first integer that will be processed.
 *
 *@b: the second integer that will be processed.
 *
 * Return: the remainder of the integer division of @a by @b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
