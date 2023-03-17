#include <stdio.h>

/**
 * main - Entry point
 * program for printing possible combination of single-digit numbers in ascending order separated by comma
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
			putchar(',');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
