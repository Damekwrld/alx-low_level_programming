#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char bets = 'A';

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	for (bets = 'A'; bets <= 'Z'; ++bets)
	{
		putchar(bets);
	}
	putchar('\n');
	return (0);
}
