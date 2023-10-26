#include "main.h"

/**
 * clear_bit - set the value to 0.
 * @n: pointer to decimal.
 * @index: index position
 * Return: 1 on succes -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dummy = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(dummy << index));
	return (1);
}
