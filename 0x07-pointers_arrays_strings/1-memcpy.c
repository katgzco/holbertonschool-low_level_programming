#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer where memory area is copy.
 * @src: pointer from is copied.
 * @n: number of time to copy.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
		return (dest);
}
