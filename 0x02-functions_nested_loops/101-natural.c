#include <stdio.h>
/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024.
 * Return:  0 Sucesfull.
 */
int main(void)
{
	int i, suma;

	suma = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			suma = suma + i;
	}
	printf("%d", suma);
	printf("\n");
}
