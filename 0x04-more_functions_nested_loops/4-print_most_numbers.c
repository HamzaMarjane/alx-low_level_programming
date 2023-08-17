#include "main.h"

/**
 * print_most_numbers - printing numbers from 0 to 9 without 2 and 4
 *
 * Return: 0 Always
 *
 *
 */

void print_most_numbers(void)

{

	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
