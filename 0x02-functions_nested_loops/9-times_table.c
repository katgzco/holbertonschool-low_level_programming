#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int t1, t2, resul;

	for (t1 = 0; t1 <= 9; t1++)
	{
		for (t2 = 0; t2 <= 9; t2++)
		{
			resul = t1 * t2;

			if (resul <= 9)
			{
				_putchar(' ');
				_putchar(resul + '0');
			}
			else
			{
				_putchar(resul /10 + '0');
				_putchar(resul % 10 + '0');
			}

			if (t2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
