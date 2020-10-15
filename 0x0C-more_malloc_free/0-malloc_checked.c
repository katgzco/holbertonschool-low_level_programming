#include  "holberton.h"
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: Get the size of the block of memory.
 * Return: a pointer to nothing.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = NULL;

	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
		exit(98);
	return (p);

}
