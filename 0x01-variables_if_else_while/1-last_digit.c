#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - take out the last number and evaluate.
 * Return: 0 (always succesfull)
 **/
int main(void)
{
	int n, ldig = 0;
/* Assign a random number to n variable */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* take out the last digit*/
	ldig = n % 10;
	/*Evaluate the last digit */
	if (ldig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	if (ldig == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldig);
	if (ldig < 6 && ldig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);

	return (0);

}
