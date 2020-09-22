#include "holberton.h"
/**
 * print_last_digit
 * @n: the number recived.
 */

int print_last_digit(int n)
{
	n = n % 10;
/* Evalua si n es positivo o negativo */
	if (n < 0)
	{
		n = n * -1;
		_putchar(n + '0');
	}
	else
		_putchar(n + '0');

	return (n);
}
