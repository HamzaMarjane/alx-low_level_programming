#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a provided function pointer.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that prints the name.
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else
		return;
}
