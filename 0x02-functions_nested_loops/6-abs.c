#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: num pass.
 * Return: operation.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
