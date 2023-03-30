#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 * of an array, separated by a comma
 * @n: input 2
 * @a: inpu 1
 * Returns: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[1]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
