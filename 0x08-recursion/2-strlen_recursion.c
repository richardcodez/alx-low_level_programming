#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: input string
 * Return: string
 */

int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s == '\0')
		return (0);
	return (count + 1 + _strlen_recursion(s + 1));
}
