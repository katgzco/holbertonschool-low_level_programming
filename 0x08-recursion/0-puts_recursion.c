#include "holberton.h"
/**
 * _puts_recursion -  prints a string.
 * @s: get an array of string for print.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
		_putchar('\n');
}
