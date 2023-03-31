#include "main.h"

/**
 * _strcat - appends source string src to
 * destination string dest
 * @dest: input 1
 * @src: input 2
 * Return: pointer to string dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len] = src[index];

	return (dest);
}
