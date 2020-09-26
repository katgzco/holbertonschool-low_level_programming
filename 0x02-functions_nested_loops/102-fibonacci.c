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
	segundo = 1;
	resultado = primero + segundo;
	printf("%li, ", resultado);
	primero = segundo;
	segundo = resultado;
	for (i = 0; i < 48; i++)
	{
		resultado = primero + segundo;
		primero = segundo;
		segundo = resultado;
		if (i < 46)
			printf("%li, ", resultado);
		else
			printf("%li", resultado);
	}
	printf("\n");
	return (0);
}
