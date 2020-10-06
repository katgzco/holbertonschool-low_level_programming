#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointe to a array.
 * @c: character to search.
 * Return: Addres of character found or null.
 */
char *_strchr(char *s, char c)
{
	while (1)
	{/*evaluate if the character pass is equal to the string character*/
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
