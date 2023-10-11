#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array to search.
 * @size: Size of the array.
 * @cmp: Pointer to the cmp function.
 *
 * Return: The index of 1st.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	}
	return (-1);
}
