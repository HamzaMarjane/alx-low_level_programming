#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Return: i success.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		++i;

	return (i);
}
