#include <stdio.h>
/**
 * main - Print all prints all possible different combinations of three digits.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int number, number2, number3;

	number = '0';
	while (number <= '9')
	{
		number2 = number + 1;
		while (number2 <= '9')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				if (number != number2 && number != number3 && number2 != number3)
				{
					putchar(number);
					putchar(number2);
					putchar(number3);
					if (number < '7' && number2 > '0')
					{
						putchar(',');
						putchar(' ');
					}
				}
				number3++;
			}

			number2++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
