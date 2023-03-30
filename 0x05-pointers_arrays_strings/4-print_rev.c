#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;

	for (x; x > 0; x--)
	{
		_putchar(*s);
		s--;
		}
	_putchar('\n');
	}
