#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is prime number
 * otherwise returns 0
 * @n: input integer
 * Return: 1 if input is a prime number else 0
 */

int is_prime_number(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
			return (1);
		else
			return (0);	
	}
	if (n < 2)
		return (0);
}
