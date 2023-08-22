#include "main.h"

/**
 * rev_string - Reverses a string
 * @s : The string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char strprts;

	while (s[i])
		i++;

	while (i > j)
	{
		strprts = s[--i];
		s[i] = s[j];
		s[j++] = strprts;
	}
}
