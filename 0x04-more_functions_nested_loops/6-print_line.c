#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: get the number.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; ++i)
		_putchar('_');
	if (n <= 0)
		_putchar('\n');
	else
		_putchar('\n');
}
