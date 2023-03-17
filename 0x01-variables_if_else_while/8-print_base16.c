#include <stdio.h>

/**
 * main - Entry point
 * program for printing all numbers of base 16 in lowercase from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x < 'g'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
