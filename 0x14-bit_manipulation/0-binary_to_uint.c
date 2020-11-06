#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: get a pointer to an array of chars.
 * Return: The convert or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1, sum_binary = 0, digit = 0;
	int counter = 0;

	if (b == 0)
		return (0);

	while (*(b + (counter + 1)))
	{
		if ((*(b + counter)) == '0' || (*(b + counter)) == '1')
			counter++;
		else
			return (0);
	}
	while (counter >= 0)
	{
		digit = (*(b + counter) - '0');
		sum_binary += (power * digit);
		power *= 2;
		counter--;
	}
	return (sum_binary);
}
