#include "holberton.h"
/**
 * rev_string - reverses a string..
 * @s: get the a string.
 */
void rev_string(char *s)
{
	char tmp;
	char *aux = s;
	char *aux2 = s;

	while (*(aux2 + 1))
		aux2++;


	while (aux < aux2)
	{
		tmp = *aux;
		*aux = *aux2;
		*aux2 = tmp;

		aux++;
		aux2--;
	}
}
