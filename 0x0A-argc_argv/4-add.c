#include "holberton.h"
/**
 * main - program that prints its name.
 * @argc: the size of the array.
 * @argv: A pointer that points to an array of characters.
 * Return: the name of the file.
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i = 1;

	///if (argc )
	//	printf("0\n");
	//else
//	{
		for (i = 1; i < argc; i++)
		{
			if (*(*(argv + i)) <= '0' || (*(*(argv + i)) >= '9'))
			{
				printf("Error\n");
				return (1);												
			}
			else if (*(*(argv + i)) >= '0' && (*(*(argv + i)) <= '9'))
				suma += atoi(*(argv + i));
			else
				printf("0\n");
		}
//	}	
	printf("%d\n", suma);
	return  (0);
}
