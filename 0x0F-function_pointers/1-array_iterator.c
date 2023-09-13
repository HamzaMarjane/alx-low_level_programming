#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: The array to be iterated over.
 * @size: The size of the array.
 * @action: A pointer to the function to be applied to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = size;
	int i;

	if (array && (size > 0) && action)
	{
	for (i = 0; i < a; i++)
	{
	action(array[i]);
	}
	}
}
