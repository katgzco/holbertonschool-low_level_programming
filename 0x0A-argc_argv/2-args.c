#include "holberton.h"
/**
 * main - program that prints its name.
 * @argc: the size of the array.
 * @argv: A pointer that points to an array of characters.
 * Return: the name of the file.
 */
int main(int argc, char *argv[])
{
	while (--argc >= 0)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return  (0);
}
