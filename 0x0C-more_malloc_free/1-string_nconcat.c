#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conca;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	if (n >= len2)
	n = len2;

	conca = (char *)malloc(len1 + n + 1);

	if (conca == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	conca[i] = s1[i];

	for (j = 0; j < n; j++)
	conca[i + j] = s2[j];

	conca[i + j] = '\0';

	return (conca);
}
