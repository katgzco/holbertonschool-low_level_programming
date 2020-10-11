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
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*(*(argv + i))))
			{
				printf("Error\n");
				return (1);												
			}
			else
				suma += atoi(*(argv + i));			
		}	
	printf("%d\n", suma);
	return  (0);
}
