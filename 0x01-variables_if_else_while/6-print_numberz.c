#include <stdio.h>
/**
 * main - Print the numbers from 0 to 9.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
