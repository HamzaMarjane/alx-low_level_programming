#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets in lowercase 10 times
 *
 * Return: 0 Always.
 *
 *
 *
 */
	void print_alphabet_x10(void)
{
	int times;
	char alpha;

	for (times = 1 ; times <= 10 ; times++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
			_putchar('\n');
	}
}
