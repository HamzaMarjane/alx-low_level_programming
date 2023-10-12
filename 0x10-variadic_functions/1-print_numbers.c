#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers with a separator.
 * @separator: The string used to separate printed integers.
 * @n: The number of integers to print.
 * @...: List of integers to be printed.
 * Return : nothing ro be returned.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int vn;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		vn = va_arg(args, int);
		printf("%d", vn);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
