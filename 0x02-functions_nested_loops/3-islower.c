#include "main.h"

/**
 * _islower - entry point
 * function that checks if letter is in lowercase
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
