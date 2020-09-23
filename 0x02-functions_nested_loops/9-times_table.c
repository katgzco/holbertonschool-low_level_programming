#include "holberton.h"
/**
 * times_table - function that prints the 9 times table
 * @void: no argument
 */
void times_table(void)
{
	int mult1, mult2, resul;

	for (mult1 = 0; mult1 <= 9; mult1++)
	{
		for (mult2 = 0; mult2 <= 9; mult2++)
		{
			resul = mult1 * mult2;
			if (mult2 == 0)
			{
				_putchar(resul + '0');
			}
			else if (resul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(resul + '0');
			}
			else if  (resul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(resul / 10 + '0');
				_putchar(resul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
