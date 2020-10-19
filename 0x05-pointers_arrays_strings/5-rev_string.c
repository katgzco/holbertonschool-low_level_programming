#include "holberton.h"
/**
 * rev_string - reverses a string..
 * @s: get the a string.
 */
void rev_string(char *s)
{
	char *aux1 = s;
	char *aux2 = s;
	char vara;

	while (*(aux2 + 1))
		aux2++;
	while (aux1 < aux2)
	{
		vara = *aux1;
		*aux1 = *aux2;
		*aux2 = vara;

		aux1++;
		aux2--;
	}
}
