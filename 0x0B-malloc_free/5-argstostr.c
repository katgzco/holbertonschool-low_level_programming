#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the length of the arguments 2D
 * @av: an array of arguments from the main.
 * Return: a pointer to the new array.
 */
char *argstostr(int ac, char **av)
{
	char *p = NULL;
	int row, column, length;

	if (ac == 0 || av == NULL)
	length = 1;
	for (row = 0; row < ac; row++)
	{
		for (column = 0; av[row][column]; column++)
			length++;
	}
	p = malloc((sizeof(char) * length + ac) + 1);
	if (p == NULL)
		return (0);
	length = 0;
	for (row = 0; row < ac; row++)
	{
		for (column = 0; av[row][column]; column++)
		{
			p[length] = av[row][column];
			length++;
		}
		p[length] = '\n';
		length++;
	}
	p[length] = '\0';
	return (p);
}
