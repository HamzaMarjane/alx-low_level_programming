#include "main.h"
/**
 * _strlen_recursion - printing string lenght.
 *
 * @s: string to be mesured,
 * Return: string length USING RECURSION
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
