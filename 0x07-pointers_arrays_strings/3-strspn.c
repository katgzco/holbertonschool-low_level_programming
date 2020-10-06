#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - t gets the length of a prefix substring.
 * @s: pointer that gets an array
 * @accept: pointer that contain the prefix subroutine.
 * Return:  length - times that the characters of prefix subroutine are found.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;
	unsigned int length = 0;

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept +  j))
				length += 1;
		}
	}
	return (length);
}
