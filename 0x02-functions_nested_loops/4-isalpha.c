#include "main.h"

/**
 * _isalpha - entry point
 * @c: the parameter for inputing letter to test
 * Return: 1 if lowercase or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
