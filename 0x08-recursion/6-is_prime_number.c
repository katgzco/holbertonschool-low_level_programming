#include "holberton.h"
/**
 * is_prime_number - evaluate if input integer is a prime number.
 * @n: number to evaluate.
 * Return: 1  is a primer or 0 if not.
 */
int auxiliar(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (auxiliar(n, 2));
}
/**
 * auxiliar - auxiliar from main function.
 * @n: number pass.
 * @i: divisor.
 * Return: 1 or 0.
 */
int auxiliar(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (n >= i)
		return (1);
	else
		return (auxiliar(n, i + 1));
}
