#include "main.h"

/**
 * puts2 - function that prints characters of
 * a string starting with the first
 * @str: input string
 * Returns: nothing
 */

void puts2(char *str)
{
	int count = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
