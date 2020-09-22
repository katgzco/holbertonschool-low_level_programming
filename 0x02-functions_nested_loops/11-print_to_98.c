#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: take num to start.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n <= 98; n++)
		{
			if (n < 98)
				printf("%d, ",n);
			if(n == 98)
				printf("%d",n);
		}
	}
		else
		{
			for ( ; n >= 98; n--)
			{
				if (n > 99)
					printf("%d, ", n);
				if (n == 98)
					printf("%d", n);
			}
		}
	putchar('\n');
}
