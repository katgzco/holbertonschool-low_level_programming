#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase.
 **/
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
