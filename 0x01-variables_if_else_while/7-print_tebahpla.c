#include <stdio.h>
/**
 * main - Prints the  alphabet in lowercase in reverse.
 * Return: 0 (Always succesfull)
 **/
int main(void)
{
	char character;

	character = 'z';
	while (character >= 'a')
	{	putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
