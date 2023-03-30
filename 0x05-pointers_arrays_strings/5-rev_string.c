#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 * Rturn: nothing
 */

void rev_string(char *s)
{
	int x = 0, end;
	char *p;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	
	for (x; x > 0; x--)
	{
		*p = *s;
		s--;
	}
	s = p;
}
