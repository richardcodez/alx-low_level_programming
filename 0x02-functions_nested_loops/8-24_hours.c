#include "main.h"

/**
 * jack_bauer - entry point
 * orints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: returns the value of the last digit
 */

void jack_bauer(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w < 3; w++)
	{
		for (x = 0; x < 9; x++)
		{
			if ((w < 2 && x < 10) || (w < 3 && x < 4))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z < 10; z++)
					{
						_putchar(w + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
