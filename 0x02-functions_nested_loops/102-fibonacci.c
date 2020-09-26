#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 succesfull.
 **/
int main(void)
{
	int i;
	long int primero, segundo, resultado;

	primero = 0;
	segundo = 1;
	printf("%li, %li, ", primero, segundo);
	for (i = 1; i <= 48; i++)
	{
		resultado = primero + segundo;
		primero = segundo;
		segundo = resultado;
		if (i < 48)
			printf("%li, ", resultado);
		else
			printf("%li", resultado);
	}
	printf("\n");
	return (0);
}
