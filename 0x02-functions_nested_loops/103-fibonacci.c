#include<stdio.h>
/**
 * main -  program that finds and prints the sum of the even-valued terms.
 * Return: 0 succesfull.
 **/
int main(void)
{
	int i;
	long int primero, segundo, resultado, suma;

	primero = 0;
	segundo = 1;
	for (i = 0; i < 33; i++)
	{
		resultado = primero + segundo;
		primero = segundo;
		segundo = resultado;
		if (resultado % 2 == 0)
			suma = suma + resultado;
	}
	printf("%li", suma);
	printf("\n");
	return (0);
}
