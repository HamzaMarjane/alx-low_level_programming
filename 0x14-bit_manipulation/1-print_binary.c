#include "main.h"

/**
 * print_binary - print binary value of an unknown
 *
 * @n: decimal to be printed in bnr
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
