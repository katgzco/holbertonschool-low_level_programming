#include <stdio.h>
/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: 0 sucesfull
 */
int main(void)
{
	long long int i, divisor;

	i =0;
	divisor = 0;
	while (i <= 612852475143)
	{
		if (i % 2 == 1 || i == 2)
		{
			if (612852475143 % i == 0)
			{
				if (i > divisor)
					divisor = i;
			}
		}
	}
	printf("%lld\n", divisor);
	return (0);
}
