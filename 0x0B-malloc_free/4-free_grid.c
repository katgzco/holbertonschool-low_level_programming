#include "holberton.h"
/**
 * free_grid -  frees a 2 dimensional.
 * @grid: doble pointer that get an array 2D.
 * @height:the size of the rows.
 */
void free_grid(int **grid, int height)
{
		for (height-- ; height >= 0;  height--)
			free(*(grid + height));
		free(grid);
}
