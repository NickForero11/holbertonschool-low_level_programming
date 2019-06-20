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

	for (num = 48 ; (num - 48) / 10 == 0 || (char) num != 'g'; num++)
	{
		if (num == 58)
			num += 39;
		putchar(num);
	}
	putchar('\n');
	return (0);
}
