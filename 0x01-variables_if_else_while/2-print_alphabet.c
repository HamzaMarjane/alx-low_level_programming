#include <stdio.h>

/**
 * main - print all alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char bets;

for (bets = 'a'; bets <= 'z'; bets++)
	putchar(bets);

putchar('\n');

return (0);
}
