#include"holberton.h"
/**
 * str_concat- Write a function that concatenates two strings.
 * @s1: dest string.
 * @s2: source string.
 * Return: return a pointer of the concatenate string.
 */
char *str_concat(char *s1, char *s2)
{
int lenght, lenght2;
char *p = NULL;

lenght = lenght2 = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for ( ; *(s1 + lenght); lenght++)
	;
for ( ; *(s2 + lenght); lenght2++)
	;
lenght = lenght + lenght2;
p = malloc((sizeof(char) * lenght)+1);
if (p == NULL)
	return (0);
lenght = 0;
lenght2 = 0;
for ( ; *(s1 + lenght); lenght++)
	*(p + lenght) = *(s1 + lenght);
for ( ; *(s2 + lenght2); lenght2++, lenght++)
	*(p + lenght) = *(s2 + lenght2);
*(p + lenght) = '\0';
return (p);
}
