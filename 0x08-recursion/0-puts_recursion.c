#include "main.h"

/**
 * _puts_recursion - prints a string followd by a new line
 * @s: charcter input
 * Return: nothing
 */


void _puts_recursion(char *s)
{
	//prototype
	if (*s != '\0')
	{
		/* priting character */
		_putchar(*s);
		/* recalling function recursively */
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
