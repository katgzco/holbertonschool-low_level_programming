#include "holberton.h"
/**
 * string_nconcat - concatenates two strings.
 * @n: the size of the s2 string.
 * @s1: String 1 to copy from the main.
 * @s2: string 2 to copy form the main.
 * Return: a pointer to the new memory allocation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int lenght, lenght2;
char *p = NULL;

lenght = lenght2 = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (lenght = 0; *(s1 + lenght); lenght++)
	;
for (lenght2 = 0; *(s2 + lenght2); lenght2++)
	;
if (n < lenght2)
	lenght2 = n;
p = malloc(lenght + lenght2 + 1);
if (p == NULL)
	return (0);
for (lenght = 0; *(s1 + lenght); lenght++)
	p[lenght] = s1[lenght];
for (lenght2 = 0; lenght2 < n & *(s2 + lenght2); lenght++, lenght2++)
	*(p + lenght) = *(s2 + lenght2);
*(p + lenght) = '\0';
return (p);
}
