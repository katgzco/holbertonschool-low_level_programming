#include <stdio.h>
/**
 * main - Print all posible combinationof the numbers from 0 to 9.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		if (number < '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
