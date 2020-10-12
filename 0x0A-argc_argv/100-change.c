#include "holberton.h"
/**
 * main - prints the minimum number of coins to make change for an amount of m.
 * @argv: the array of cents.
 * @argc: the lengh of the array.
 * Return: the number of coins to make chance or 1 if argc is < 1.
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coin = 0;
	int i;
	int numbers[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(*(argv + 1));
	for (i = 0; i <= (sizeof(numbers) / sizeof(int)); )
	{
		if (coin >= *(numbers + i))
		{
			coin = coin - *(numbers + i);
			cents += 1;
		}
		if (coin < *(numbers + i))
			i++;
	}
	printf("%d\n", cents);
	return (0);
}
