#include "holberton.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: The size of the double pointer.
 * @height: The size of the simple pointer.
 * Return: a pointer to an array 2D.
 */
int **alloc_grid(int width, int height)
{
int row, column;
int **p = NULL;

if (width <= 0 || height <= 0)
	return (0);
p = (malloc(sizeof(int *) * height));
if (p == NULL)
	return 0;
for (row = 0; row < height; row++)
{
	p[row] = (malloc(sizeof(int) * width));
	if (p[row] != NULL)
	{
		for (column = 0; column < width;  column++)
			p[row][column] = 0;
	}
	else
	{
	for(row--;row >= 0; row--)
			free(p[row]);
	free(p);
	return (0);
}
return (p);
}
