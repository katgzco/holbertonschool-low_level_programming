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
		*s1 = '\0';
	for (lenght = 0; *(s1 + lenght); lenght++)
		;
	if (s2 == NULL)
		*s2 = '\0';
	for (lenght2 = 0; *(s2 + lenght2); lenght2++)
		;
	lenght += lenght2;
	p = malloc(lenght * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	lenght = 0;
	for (lenght = 0; *s1; lenght++, s1++)
		*(p + lenght) = *s1;
	for (lenght2 = lenght ; *s2; lenght2++, s2++)
		*(p + lenght2) = *s2;
	*(p + lenght2) = '\0';
	return (p);
}
