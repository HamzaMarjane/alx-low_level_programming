#include "main.h"

/**
 * _isalpha - checking if alphabets or not
 * @c: is the funtions variable
 * Return: 1 if its a alphabet otherwise 0
 *
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
