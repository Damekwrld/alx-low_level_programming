#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - more headers goes there
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		printf("if the number greater than 0: is positive \n", n);
		printf("if the number is 0: is zero \n", n);	
		printf("if the number is less than 0: is negative \n", n);
	return (0);
}
