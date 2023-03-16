#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int n;
	int stringlength = strlen(string);

	for (n = 0; n++; n < stringlength)
	{
		putchar("%c",string[n]);
	}
	return (0);
}
