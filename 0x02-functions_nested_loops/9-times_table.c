#include "main.h"

/**
 * times_table - entry point
 * orints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: returns the value of the last digit
 */

void times_table(void)
{
	int w;
	int x;
	int y;
	int z;
	int a;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x < 10; x++)
		{
			y = w * x;
			if (y > 9)
			{
				z = y % 10;
				a = (y - z) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(a + '0');
				_putchar(z + '0');
			}
			else
			{
				if (x != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(y + '0');
			}
		}
		_putchar('\n');
	}
}
