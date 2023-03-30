#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by
 * src to buffer pointed by dest
 * @dest: input of destination address
 * @src: inpu of source address
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
		i++;

	for ( ; x < i; x++)
		dest[x] = src[x];
	dest[i] = '\0';

	_putchar('\n');

	return (dest);
}
