#include "holberton.h"

/**
 * print_alphabet - Prototype of a function that prints the alphabeth.
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
