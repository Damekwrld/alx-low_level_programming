#include <stdio.h>
/**
 * main - A C program that prints the size of various type on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: byte(s) %d\n", sizeof(char));
	printf("Size of an int: byte(s) %d\n", sizeof(int));
	printf("Size of a long int: byte(s) %d\n", sizeof(long int));
	printf("Size of a long long int: byte(s) %d\n", sizeof(long long int));
	printf("Size of a float: byte(s) %d\n", sizeof(float));
	return (0);
}
