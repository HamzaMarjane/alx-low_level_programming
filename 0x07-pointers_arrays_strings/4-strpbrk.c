#include "main.h"

/**
 * _strpbrk - matches any character
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
			return (s);
			}

			j++; /*add j+1*/
		}

		s++;
	}
	return (0);

}
