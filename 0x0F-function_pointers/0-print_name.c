#include "function_pointers.h"
/**
 *print_name - prints a name.
 * @name: a pointer to a string.
 * @f: a pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
