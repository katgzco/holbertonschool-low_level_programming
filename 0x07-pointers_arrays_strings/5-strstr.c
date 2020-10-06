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
		char *i = haystack;
		char *j = needle;

		while (*j == *haystack && *j != '\0' && *haystack != '\0')
		{
			haystack++;
			j++;

		}
		if (*j == '\0')
		{
			return (i);
		}
		haystack = i + 1;

	}
	return (0);

}
