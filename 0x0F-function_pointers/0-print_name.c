#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - executes a function given as a parameter on array.
 * @name: a pointer to a string.
 * @f: a pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
