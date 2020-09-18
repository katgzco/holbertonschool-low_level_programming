#include <stdio.h>
/**
 * main - Print the numbers of base 16 in lowercase.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number;

	number = 48;
	while (number <= 102)
	{
		if ((number >= 48 && number <= 57) || (number >= 97 && number <= 102))
		{
			putchar(number);
			number++;
		}
		else
		{
			number++;
		}
	}
	putchar('\n');
	return (0);
}
