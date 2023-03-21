#include "main.h"

void print_alphabet(void);
/**
 * main - Entry point for th program
 * a function that prints alphabet in lowercase
 * Return: 0 for success
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/* function that prints alphabet in lowercase */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
