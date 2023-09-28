#include "main.h"
/**
 * factorial - return the fact of a number given.
 *
 * @n: the number given to manipulate with the function.
 * Return: the value of its factorial.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
