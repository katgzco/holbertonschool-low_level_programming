#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: is the definition operator.
 */
void print_all(const char * const format, ...)
{
	int j;
	va_list arg;
	char *s;

	va_start(arg, format);
	j = 0;

	while (format[j] && format)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char) va_arg(arg, int));
			break;
			case'i':
				printf("%d", va_arg(arg, int));
			break;
			case 'f':
				printf("%f", va_arg(arg, double));
			break;
			case 's':
				s = va_arg(arg, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
			break;
		}
		if ((format[j] == 'c' || format[j] == 'f' || format[j] == 's' ||
		format[j] == 'i') && format[j + 1])
			printf(", ");
		j++;
		}
	va_end(arg);
	printf("\n");
}
