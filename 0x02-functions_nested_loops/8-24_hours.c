#include "holberton.h"
/**
* jack_bauer - prints every minute of the day .
*/
void jack_bauer(void)
{
	int hour, minut;

	for (hour = 0; hour < 24; hour++)
	{
		for (minut = 0; minut <= 59; minut++)
		{
					_putchar(hour / 10 + '0');
					_putchar(hour % 10 + '0');
					_putchar(':');
					_putchar(minut / 10 + '0');
					_putchar(minut % 10 + '0');
					_putchar('\n');
		}
	}
}
