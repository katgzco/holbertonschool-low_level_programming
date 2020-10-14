#include"holberton.h"
/**
 * str_concat- Write a function that concatenates two strings.
 * @s1: dest string.
 * @s2: source string.
 * Return: return a pointer of the concatenate string.
 */
char *str_concat(char *s1, char *s2)
{
	int lenght, lenght2, lenght_copy;
	char *p = NULL;

	if (s1 == NULL)
	{
		*s1 = '\0';
		lenght = 0;
	}
	else
	{
		for (lenght = 0; *(s1 + lenght); lenght++)
			;
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
		lenght2 = 0;
	}
	else
	{
		for (lenght2 = 0; *(s2 + lenght2); lenght2++)
			;
	}
	lenght += lenght2;
	p = malloc(lenght * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	for (lenght_copy = 0; *s1; lenght_copy++, s1++)
		*(p + lenght_copy) = *s1;
	for ( ; *s2; lenght_copy++, s2++)
		*(p + lenght_copy) = *s2;
	return (p);
}

