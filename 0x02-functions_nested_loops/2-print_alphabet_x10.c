#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * function that prints alphabet in lowercase 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
