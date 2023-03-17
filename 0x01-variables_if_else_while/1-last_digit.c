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
	int xd;

	xd = n % 10;
	if (n > 0 && xd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, xd);
	else if (xd == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (xd > 0 && xd < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, xd);
	else
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, xd);
	return (0);
}
