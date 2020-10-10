#include "holberton.h"
/**
 * main - program that prints its name.
 * @argc: the size of the array.
 * @argv: A pointer that points to an array of characters.
 * Return: the name of the file.
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", total);
	}

	return  (0);
}
