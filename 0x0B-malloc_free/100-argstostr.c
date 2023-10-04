#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, else NULL
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int index = 0;
	int j;
	char *result;

	if (ac == 0 || av == NULL)
	return (NULL);

	result = (char *)malloc(total_length);

	for (i = 0; i < ac; i++)
	total_length += strlen(av[i]) + 1;

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	result[index++] = av[i][j];

	result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}
