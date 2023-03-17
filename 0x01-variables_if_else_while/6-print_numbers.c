#include <stdio.h>

/**
 * main - Entry point
 * program for printing single digit numbers of base from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
