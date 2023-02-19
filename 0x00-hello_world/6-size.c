#include <stdio.h>
/**
 * main - A C program that prints the size of various type on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{

	char a;
	int i;
	long int c;
	long long int li;
	float f;

	printf("Size of a char: %ld byte(s) \n", (unsigned long)sizeof(a));
	printf("Size of an int: %ld byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s) \n", (unsigned long)sizeof(li));
	printf("Size of a float: %ld byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
