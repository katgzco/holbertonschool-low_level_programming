#include "holberton.h"
/**
 * _strstr - Find a sub string in a string
 * @haystack: a pointer to the first string
 * @needle: a pointer to the substring
 * Return: a pointer to the first value of the string or NULL
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		while (*j == *haystack && *needle != '\0' && *haystack != '\0')
		{
			haystack++;
			needle++;

		}
		if (*needle == '\0')
		{
			return (i);
		}
		haystack += 1;

	}
	return (0);

}
