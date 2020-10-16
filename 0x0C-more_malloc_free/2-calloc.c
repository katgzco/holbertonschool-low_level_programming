#include "holberton.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: the size of an array.
 * @size: the data type.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p =  NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
