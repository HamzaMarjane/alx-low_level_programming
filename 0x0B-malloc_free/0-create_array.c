#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: the character stored.
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ary = malloc(sizeof(c) * size);

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ary[i] = c;

	return (ary);
}
