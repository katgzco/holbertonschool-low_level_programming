#include "holberton.h"

/**
 * length - Get the  length f an array.
 * @s: get the string to found the lenght.
 * Return: the size of the length.
 */
int length(char *s)
{
	unsigned int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @n: the size of the s2 string.
 * @s1: String 1 to copy from the main.
 * @s2: string 2 to copy form the main.
 * Return: a pointer to the new memory allocation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int size, size2;

	size = size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = length(s2);
	size2 = length(s1);
	size2 += size;
	p = malloc((sizeof(char) * size2) + 1);
	if (p == NULL)
		return (0);
	if (n >= size)
	n = size;
	size2 = size = 0;
	while (*(s1 + size2))
	{
		*(p + size2) = *(s1 + size2);
		size2++;
	}
	while (size <= n)
	{
		*(p + size2) = *(s2 + size);
		size++;
		size2++;
	}
	*(p + size2) = '\0';
	return (p);
}
