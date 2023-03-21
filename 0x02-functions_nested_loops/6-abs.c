#include "main.h"

/**
 * _abs - entry point
 * @n: the parameter for number to test
 * Return: 1 if number is positive or 0 if zero and -1 if negative
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
