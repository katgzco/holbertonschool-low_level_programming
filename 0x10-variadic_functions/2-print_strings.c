#include "variadic_functions.h"
/**
 * print_strings - function that prints numbers.
 * @separator: is the char that separate the numbers.
 * @n:the length of the string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arg;

	va_start(arg, n);
	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(arg, char*);
			if (p == NULL)
				printf("(nil)");
			else
				printf("%s", p);

			if (i < (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
