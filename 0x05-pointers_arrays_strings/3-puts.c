#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line
 * @str: input string
 * Return: returns nothing
 */

void _puts(char *str)
{
	int x = 0;

	while (*str)
	{
		_putchar(*str++);
		x++;
	}

	_putchar('\n');
}
