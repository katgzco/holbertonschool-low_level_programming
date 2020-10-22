#include "3-calc.h"
#include <stdio.h>
/**
 * main - get the dates for operate the calculator
 * @argc: the length of the array.
 * @argv: The array.
 * Return: 0 - succesful.
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

}
