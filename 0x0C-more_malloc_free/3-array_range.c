#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum of the array.
 * @max: maximum of the array.
 * Return: array we worked on.
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
