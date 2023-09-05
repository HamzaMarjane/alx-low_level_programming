#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * countw - Count the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words in the string.
 */
int countw(char *s)
{
	int f, i, v;

	f = 0;
	v = 0;
	i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == ' ')
	f = 0;
	else if (f == 0)
	{
	f = 1;
	v++;
	}

	i++;
	}

	return (v);
}
/**
 * **strtow - Split a string into words.
 * @str: The input string.
 * Return: NULL
 **/
char **strtow(char *str)
{
	char **x, *tmp;
	int i = 0, v = 0, l = 0, chars = 0, j = 0, de = 0, fin = 0;

	while (str[l] != '\0')
	l++;
	chars = countw(str);
	if (chars == 0)
	return (NULL);

	x = (char **) malloc(sizeof(char *) * (chars + 1));
	if (x == NULL)
	return (NULL);

	while (i <= l)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (j)
	{
	fin = i;
	tmp = (char *) malloc(sizeof(char) * (j + 1));
	if (tmp == NULL)
	return (NULL);
	while (de < fin)
	*tmp++ = str[de++];
	*tmp = '\0';
	x[v] = tmp - j;
	v++;
	j = 0;
	}
	}
	else if (j++ == 0)
	de = i;

	i++;
	}

	x[v] = NULL;

	return (x);
}

