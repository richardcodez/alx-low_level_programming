#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 * Rturn: nothing
 */

void rev_string(char *s)
{
	char reversed = s[0];
	int count = 0, i, j;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		reversed = s[i];
		s[i] = s[count];
		s[count] = reversed;
	}
}
