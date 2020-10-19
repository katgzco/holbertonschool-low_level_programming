#include "holberton.h"
/**
  * print_rev - reverses a string.
  * @s: char pointer.
  */
void print_rev(char *s)
{
	char *beg = s;

	while (*s)
		s++;
	while (s != beg)
	{
		s--;
		_putchar(*s);
	}
_putchar('\n');
}
