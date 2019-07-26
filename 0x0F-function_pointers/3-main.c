#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 *@argc: the integer that contains the number of arguments
 *		 that are passed to the main function.
 *
 *@argv: the char vector that contains the arguments
 *		 that are passed to the main function.
 *
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	if (argc < 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	int *num1;
	int *num2;
	char *operator;

	operator = malloc(sizeof(char));
	operator[0] = *argv[2];
	num1 = malloc(sizeof(int));
	num2 = malloc(sizeof(int));
	*num1 = atoi(argv[1]);
	*num2 = atoi(argv[3]);

	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("%s\n", "Error");
		exit(100);
	}

	int (*f)(int a, int b);

	f = get_op_func(operator);

	if (f == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	printf("%d\n", f(*num1, *num2));

	free(num1);
	free(num2);
	free(operator);

	return (0);
}
