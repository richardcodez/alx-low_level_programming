#include "main.h"

/**
 * puts_half - function that prints 2nd half of
 * a string starting, if n is odd, then
 * n = (string_length - 1) / 2
 * @str: input string
 * Returns: nothing
 */

void puts_half(char *str)
{
	int a, n, count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;

	n = count / 2;
	if ((count % 2) != 0)
		n = (count + 1) / 2;

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
