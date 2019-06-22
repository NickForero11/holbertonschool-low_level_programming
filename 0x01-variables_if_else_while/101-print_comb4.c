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
	int i;
	int j;

	for (num = '0'; num <= '7'; num++)
	{
		for (i = num + 1; i <= '8'; i++)
		{
			for (j = i + 1; j <= '9'; j++)
			{
				putchar(num);
				putchar(i);
				putchar(j);
				if (!(num == '7' && i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				} else
				{
					break;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
