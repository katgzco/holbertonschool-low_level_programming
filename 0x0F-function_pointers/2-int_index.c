#include "function_pointers.h"
/**
 * int_index - function that searches the position of an integer.
 * @array:Get an array.
 * @size: the size of the array.
 * @cmp: The pointer to the function.
 * Return: the position or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

result = 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = (cmp(array[i]));

		if (result != 0)
			return (i);
	}
	return (-1);
}
