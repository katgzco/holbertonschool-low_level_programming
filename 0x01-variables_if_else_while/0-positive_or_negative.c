#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number to a varible and evalute.
 * Return: 0.
 **/

int main(void)
{
	int n;
/* assign a randon number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* Evaluate the varible */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	printf("%d is negative\n", n);
	return (0);
}
