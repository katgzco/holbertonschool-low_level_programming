#include "holberton.h"
/**
 * print_square -  prints a square.
 * @size: get the number.
 */
void print_square(int size)
{
	int i, j;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		if (size > 1)
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
