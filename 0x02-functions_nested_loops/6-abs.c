#include "holberton.h"

/**
 * int _abs - computes the absolute value of an integer.
 * @int: num pass.
 * Return: operation.
 **/

int _abs(int n)
{
	if (n < 0)
		return(n * -1);
	else
		return(n);
}
