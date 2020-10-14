#include"holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: The length of the array.
 * Return: return a copy of the parameter.
 */
char *_strdup(char *str)
{
int lenght = 0;
int lenght_copy = 0;
char *p = NULL;

if (str == NULL)
	return (0);
while (*(str + lenght))
	lenght++;
p = malloc(lenght * sizeof(char));
if (p == NULL)
	return (0);
for (lenght_copy = 0; lenght >= lenght_copy; lenght_copy++)
	*(p + lenght_copy) = *(str + lenght_copy);
return (p);
}
