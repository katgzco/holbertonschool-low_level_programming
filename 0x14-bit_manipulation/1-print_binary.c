#include "holberton.h"
/**
 * print_binary - prints the binary number of a decimal.
 * @n: get decimal number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bytes = 0;

	if (n == 0)
	{
		putchar('0');
	}
	for (bytes = ((sizeof(unsigned long int) * 8) - 1); bytes >= 0; bytes--)
	{
		mask = n >> bytes;
		if (mask)
		{
			if (mask & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
