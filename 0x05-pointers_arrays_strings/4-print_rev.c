#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string printed
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
