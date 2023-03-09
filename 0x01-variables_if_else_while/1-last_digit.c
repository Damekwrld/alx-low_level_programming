#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int dope = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (dope > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dope);
	}
	else if (dope == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, dope);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dope);
	}
	return (0);
}
