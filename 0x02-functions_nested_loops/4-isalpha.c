#include "holberton.h"
/**
 * _isalpha - Cheecks for aplhabetic character.
 * @c: value for check.
 * Return: 1 : lower or 0: otherwise.
 */
int _isalpha(int c)
{
	if ((c  >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
