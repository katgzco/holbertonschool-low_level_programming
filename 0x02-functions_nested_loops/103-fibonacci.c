#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 succesfull.
 **/
int main(void)
{
	int i;
	long int primero, segundo, resultado, suma;

	primero = 0;
	segundo = 1;
	resultado = 0;
	suma = 0;
	while (resultado <= 4000000)
	{
		resultado = primero + segundo;
		primero = segundo;
		segundo = resultado;
		if (resultado <= 4000000);
		{
			if (resultado % 2 == 0)
				suma = suma + resultado;
		}
	}
	printf("%li\n", suma);
	return (0);
}
