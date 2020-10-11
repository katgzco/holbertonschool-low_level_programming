#include "holberton.h"
#include <ctype.h>
/**
 * main - program that prints its name.
 * @argc: the size of the array.
 * @argv: A pointer that points to an array of characters.
 * Return: the name of the file.
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i;

	argv++;
	while (--argc)
	{
		for (i = 0; *((*argv) + i); i++)
		{
			if (!isdigit(*((*argv) + i)))
			{
				printf("Error\n");
				return (1);
			}
		}
	suma += atoi(*argv);
	argv++;
	}
	printf("%d\n", suma);
	return  (0);
}
