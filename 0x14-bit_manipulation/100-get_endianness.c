#include "main.h"

/**
 * get_endianness - endianness checking.
 * Return: 0 if big, or 1 if little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *ptr = (unsigned char *)&i;

	return (*ptr == 1);
}
