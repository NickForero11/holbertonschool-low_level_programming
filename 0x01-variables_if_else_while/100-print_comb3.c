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
	int aux;
	int copia;

	aux  = 49;
	copia = aux;

	for (num = 48; (num - 48) / 10 == 0; num++)
	{
		for ( ; (aux - 48) / 10 == 0; aux++)
		{
			putchar(num);
			putchar(aux);
			if (!(aux == 57 && num == 56))
			{
				putchar(',');
				putchar(' ');
			}
		}
		aux = copia + 1;
		copia = aux;
	}
	putchar('\n');

	return (0);
}
