#include <stdio.h>

/**
 * main - Entry point
 * program for printing alphabets in reverse in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
