#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[12] = "Size of a";

	printf("%s %s: %d byte(s)\n", msg, "char", sizeof(char));
	printf("%s %s: %d byte(s)\n", msg, "int", sizeof(int));
	printf("%s %s: %d byte(s)\n", msg, "long int", sizeof(long int));
	printf("%s %s: %d byte(s)\n", msg, "long long int", sizeof(long long int));
	printf("%s %s: %d byte(s)\n", msg, "float", sizeof(float));
	return (0);
}
