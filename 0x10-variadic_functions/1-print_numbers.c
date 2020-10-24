#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @separator: is the char that separate the numbers.
 * @n:the length of the string.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, unsigned int));
			if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");
	va_end(arg);
}
