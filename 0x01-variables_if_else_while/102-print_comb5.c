#include <stdio.h>
/**
 * main - Print all possible combination of two-digit numbers.
 * Return: 0 always sucesull.
 */
int main(void)
{
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (i = j + 1; i <= 99; i++)
		{
			if (i != j)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (j < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
