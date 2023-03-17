#include <stdio.h>

/**
 * main - Entry point
 * program for printing alphates in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
