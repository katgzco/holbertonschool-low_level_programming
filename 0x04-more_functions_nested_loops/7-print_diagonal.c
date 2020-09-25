#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: get the number.
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			if (j != 1 && i != j)
				_putchar(' ');
			else
				_putchar('\\');
		}
		if (n > 1)
			_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
