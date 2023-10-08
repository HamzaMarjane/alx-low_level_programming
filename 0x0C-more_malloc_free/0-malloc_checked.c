#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: The bytes to be allocated.
 * Return: pointer 'ptr'.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
