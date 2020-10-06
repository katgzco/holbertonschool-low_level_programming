#include "holberton.h"
/**
 * _strpbrk - locates a character in a string.
 * @s: pointe to a array.
 * @accept: pointer to search.
 * Return: Addres of character found or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s != '\0')
	{
		for (i = 0; *(accept + i); i++)
		{
/*evaluate if the character pass is equal to the string character*/
			if (*s == *(accept + i))
				return (s);
			if (*s == '\0')
				return (0);
		}
			++s;
	}
	return (0);
}
