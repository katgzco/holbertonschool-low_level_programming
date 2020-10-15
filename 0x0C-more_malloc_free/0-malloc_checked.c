#include  "holberton.h"
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: Get the size of the block of memory.
 * Return: a pointer to nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(sizeof(unsigned int) * b);
	if (p)
		return (p);
	exit(98);
}
