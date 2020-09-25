#include <stdio.h>
/**
 * main - Print all possible combination of two-digit numbers.
 * Return: 0 always sucesull.
 */
int main(void)
{
	int i, j;

	for (j = 0; j <= 98; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (j != 1)
			if (i != j)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');

				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (j < 98)
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
