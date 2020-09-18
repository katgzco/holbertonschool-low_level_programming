#include <stdio.h>
/**
 * main - Prints the  alphabet in lowercase and uppercase.
 * Return: 0 (Always succesfull)
 **/
int main(void)
{
	char lowcharacter, upcharacter;

	lowcharacter = 'a';
	while (lowcharacter <= 'z')
	{	putchar(lowcharacter);
		lowcharacter++;
	}
	upcharacter = 'A';
	while (upcharacter <= 'Z')
	{       putchar(upcharacter);
		upcharacter++;
	}
	putchar('\n');
	return (0);
}
