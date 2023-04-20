#include <unistd.h>

/**
 * _putchar - writes the chacter c to the stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -q is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
