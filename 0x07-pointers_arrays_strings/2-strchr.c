#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointe to a array.
 * @c: character to search.
 * Return: Addres of character found or null.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *s; s++, i++)
	{/*evaluate if the character pass is equal to the string character*/
		if (*s == c)
			return (s);
	}
	return ('\0');
}
