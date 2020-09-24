#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: get the number.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
