#include "search_algos.h"
/**
* linear_search - adds a new node at the end of a listint_t list.
* @array:  pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{

	if (array != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
