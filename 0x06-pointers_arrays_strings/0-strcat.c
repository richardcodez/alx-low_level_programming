#include "main.h"

/**
 * _strcat - appends source string src to
 * destination string dest
 * @dest: input 1
 * @src: input 2
 * Return: pointer to string dest
 */

char *_strcat(char *dest, const char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
