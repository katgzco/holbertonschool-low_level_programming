#include <stdio.h>
/**
 * main - Print all the numbers from 0 to 100.
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
			if(number != number2)
			{
				putchar(number);
				putchar(number2);
				putchar(',');
				putchar(' ');
			}
			
			number2++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
