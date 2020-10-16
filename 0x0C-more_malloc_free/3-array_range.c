#include "holberton.h"
/**
 * array_range - creates an array of integers.
 * @min: range of value.
 * @max: range of value.
 * Return: a pointer to an int.
 */
int *array_range(int min, int max)
{
	int size, i;
	int *p = NULL;

	size = i = 0;
	if (min > max)
		return (0);
	i = min;
	for (size = 0; i <= max; size++, i++)
		;
	p = malloc(sizeof(int) * size);
	if (!p)
		return (0);
	for (size = 0; min <= max; size++, min++)
		*(p + size) = min;
	return (p);
}
