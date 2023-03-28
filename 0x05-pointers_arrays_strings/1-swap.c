#include "main.h"

/**
 * swap_int - function tat swaps the values of two integers
 * @a: integer input
 * @b: another integer input
 */

void swap_int(int *a, int *b)
{
	int store_a;

	store_a = *a;
	*a = *b;
	*b = store_a;
}
