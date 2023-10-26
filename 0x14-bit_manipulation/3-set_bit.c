#include "main.h"

/**
 * set_bit - sets value to 1
 * @n: decimal number pssd.
 * @index: index position to change. 0 to hero
 * Return: 1 in succes 0 in error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
