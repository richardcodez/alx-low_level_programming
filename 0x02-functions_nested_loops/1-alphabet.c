#include "main.h"

/**
 * main - check the code
 * function that prints alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
