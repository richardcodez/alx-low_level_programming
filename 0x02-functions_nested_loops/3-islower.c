#include "main.h"

/**
 * _islower - entry point
 * @c: the parameter for inputing letter to test
 * Return: 1 if lowercase or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
