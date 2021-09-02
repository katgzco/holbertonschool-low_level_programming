#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* using the Binary search algorithm
* @array:  pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jum_step = sqrt(size);
	size_t reference = 0;

	if (array)
	{
		while (reference < size && array[reference] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", reference, array[reference]);
			reference += jum_step;
		}

		printf("Value found between indexes [%lu] and [%lu]\n",
		(reference - jum_step), reference);

		jum_step = reference - jum_step;
		if (reference >= size)
		{
			reference -= 1;
		}
		while (jum_step <= reference)
		{
			printf("Value checked array[%lu] = [%d]\n", jum_step, array[jum_step]);
			if (array[jum_step] == value)
				return (jum_step);

			jum_step++;
		}
	}
	return (-1);
}
