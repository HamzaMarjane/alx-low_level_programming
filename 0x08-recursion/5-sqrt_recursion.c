#include "main.h"

/**
 * _sqrt - Calculates the integer square root of a non-negative number.
 * @n: The number for which to find the integer square root.
 * @v: An initial value to start the calculation from.
 *
 * Return: The integer square root of the number, or -1 if not found.
 */

int _sqrt(int n, int v)
{
	if (n < 0 || v * v > n)
		return (-1);
	if (v * v == n)
		return (v);
	return (_sqrt(n, v + 1));
}

/**
 * _sqrt_recursion - Calculates the square of a given number using recursion.
 * @n: The input number for which to find the square root.
 *
 * Return: The square root of the number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
