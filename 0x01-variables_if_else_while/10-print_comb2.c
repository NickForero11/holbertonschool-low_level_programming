#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;

	for (num = 48; (num - 48) / 10 == 0; num++)
	{
		int aux;

		for (aux = 48; (aux - 48) / 10 == 0; aux++)
		{
			putchar(num);
			putchar(aux);
			if (aux != 58)
				putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
