#include "holberton.h"
/**
 * _isupper - checks for uppercase character.
 * @c: get the character.
 * Return: 1 if is uppercase orr 0  otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
