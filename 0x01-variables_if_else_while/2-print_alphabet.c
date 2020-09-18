#include <stdio.h>
/**
 * main - Prints the  alphabet in lowercase.
 * Return: 0 (Always succesfull)
 **/
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{	putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
