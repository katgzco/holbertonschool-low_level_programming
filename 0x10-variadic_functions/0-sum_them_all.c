#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The total size of the arguments.
 * Return: the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;
	/*inicialization*/
	va_start(arg, n);
	/* acces all the arguments */
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	/*clean memory */
	va_end(arg);
	return (sum);
}
