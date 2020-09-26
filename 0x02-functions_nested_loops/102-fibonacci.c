#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 succesfull.
 **/
int main(void)
{
	int i;
	long int primero, segundo, resultado;

	primero = 1;
	segundo = 2;
	resultado = 0;
	printf("%li, %li, ", primero, segundo);
	for (i = 0; i < 50; i++)
	{
		resultado = primero + segundo;
		primero = segundo;
		segundo = resultado;
		if (i < 48)
			printf("%li, ", resultado);
		else
			printf("%li", resultado);
	}
	printf('\n');
	return (0);
}
