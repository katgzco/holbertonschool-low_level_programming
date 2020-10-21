#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  executes a function given as a parameter.
 * @array:Get an array.
 * @size: the size of the array.
 * @action: The pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
