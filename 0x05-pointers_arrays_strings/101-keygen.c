#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password
 *
 * Return: 0 for success.
 */

int main(void)
{
	int total = 0;
	char randomChar;

	srand(time(NULL));
	while (total <= 2772)
	{
		randomChar = rand() % 128;
		total += randomChar;
		putchar(randomChar);
	}
	putchar(2772 - total);
	return (0);
}

