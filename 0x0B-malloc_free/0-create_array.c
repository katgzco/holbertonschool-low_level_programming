#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: parameter to the size of the array.
 * @c: parameter character.
 * Return: 0 for finish or pointer.
 **/

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
		else
		return (0);
}
