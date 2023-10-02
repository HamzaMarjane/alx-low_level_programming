#include "main.h"

/**
 * _strspn - Calculates the length of the prefix substring
 *
 * @s: The input string
 * @accept: The characters to be matched
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int b = 0;

	while (s[j] != '\0')
	{
		if (s[j] != ' ')
		{
			while (accept[i] != '\0')
			{
				if (s[j] == accept[i])
					b++;
				i++;
			}
			i = 0;
		}
		else
		{
			return (b);
		}
		j++;
	}
	return (b);
}

