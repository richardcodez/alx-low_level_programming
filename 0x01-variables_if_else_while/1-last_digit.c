#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * generate a random number
 * we check if the last digit is greater 5
 * or is 0
 * or is less than 6 and not 0
 * then print the result
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0 && n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n % 10 > 0 && n % 10 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
