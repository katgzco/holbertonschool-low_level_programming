#include <stdio.h>
/**
 * main - Prints the  alphabet in lowercase excep the q and e.
 * Return: 0 (Always succesfull)
 **/
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
		{
			character++;
		}
		else
		{
			putchar(character);
			character++;
		}
	}
	putchar('\n');
	return (0);
}
