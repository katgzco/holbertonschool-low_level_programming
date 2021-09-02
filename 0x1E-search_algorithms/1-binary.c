#include "search_algos.h"
/**
* binary_search - adds a new node at the end of a listint_t list.
* @array:  pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{

size_t first = 0;
size_t last = size - 1;
size_t middle = (first + last) / 2;

	if (array)
	{
		while (first <= last)
		{

			printf("Searching in array: ");
			for (size_t i = first; i <= last; i++)
			{
				printf("%d", array[i]);
				if (i < last)
					printf(", ");
				else
					printf("\n");
			}

			if (array[middle] < value)
				first = middle + 1;
			else if (array[middle] == value)
			{
				return (middle);
			}
			else
			{
				last = middle - 1;
			}
			middle = (first + last) / 2;


		}
	}
	return (-1);
}
