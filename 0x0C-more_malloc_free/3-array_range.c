#include "holberton.h"
/**
 * array_range - creates an array of integers.
 * @min: range of value.
 * @max: range of value.
 * Return: a pointer to an int.
 */
int *array_range(int min, int max)
{
	int size = 0;
	int *p = NULL;

	if (min > max)
		return (0);
	size  = max - min;
	p = malloc((sizeof(int) * size) + 1);
	if (!p)
		return (0);
	if (max == min)
		*p = 0;
	for (size = min ; min <= max; size++, min++)
		*(p + size) = min;
	return (p);
}
