#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number, number2;

	number2 = '0';
	number = '0';
	while (number <= '9')
	{
		number2 = number;

		while (number2 <= '9')
		{
			if (number != number2)
			{
				putchar(number);
				putchar(number2);
				if (number < '8' && number2 > '0')
				{
					putchar(',');
					putchar(' ');
				}
			}

			number2++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
