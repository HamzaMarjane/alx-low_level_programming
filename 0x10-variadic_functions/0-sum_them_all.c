#include "variadic_functions.h"

/**
*sum_them_all - Calculate the sum of a variable number of unsigned integers.
*@n: The number of unsigned integers to sum.
*@...: Variable number of unsigned integers to be summed.
* Return: The sum of the insigned ints.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	{
	res += va_arg(args, int);
	}

	va_end(args);
	return (res);
}
