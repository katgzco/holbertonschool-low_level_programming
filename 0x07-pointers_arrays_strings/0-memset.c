#include "holberton.h"
/**
 * _memset -  fills memory with a constant byte.
 * @s: Pointer (array) pass.
 * @b: value to fill
 * @n: number of times to fill.
 * Return: Pointer of array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
