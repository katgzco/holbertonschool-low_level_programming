#include "holberton.h"
/**
 * print_sign -  prints the sign of a number.
 *@n: number pass.
 * Return: 1 n > 0, 0 n == 0, -1 n < .
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
