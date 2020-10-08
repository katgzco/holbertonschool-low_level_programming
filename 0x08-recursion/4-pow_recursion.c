#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x : base.
 * @y: times.
 * Return: -1 if y is lower than 0, or the factorial.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
