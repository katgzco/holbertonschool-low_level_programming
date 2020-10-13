#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Crate an array and asigned c in memory.
 * @size: The length of the array.
 * @c: the character to  asigned in the array.
 * Return: a pointer to the array in position 0.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);
	char *p = NULL;
	unsigned int i = 0;

	p = (char *)malloc(size * sizeof(char));
	if (p)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	return (0);
}
