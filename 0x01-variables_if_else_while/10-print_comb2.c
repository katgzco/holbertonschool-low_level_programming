#include <stdio.h>
/**
 * main - Print all the numbers from 0 to 100.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number, number2;

	number = '0';
	while (number <= '9')
	{
		number2 = '0';
		while (number2 <= '9')
		{
			putchar(number);
			putchar(number2);
			if (number != '9' || number2 != '9')
			{
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
