#include "holberton.h"
/**
 * print_triangle - prints a triangle.
 * @size: get the num.
 */
void print_triangle(int size)
{
	int i, j;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			if (i <= (size - j))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
		if (size <= 0)
			_putchar('\n');
}
