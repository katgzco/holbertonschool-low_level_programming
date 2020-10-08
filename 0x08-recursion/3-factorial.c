#include "holberton.h"
/**
 * factorial- returns the factorial of a given number.
 * @n: the number of factorial.
 * Return: n < 0 return -1, factorial 0 is 1 or factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n  == 0)
		return (0);

	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
