#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100.
 * Return: 0 succesfull.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
