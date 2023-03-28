#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input character
 * Return - length of string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (x != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
