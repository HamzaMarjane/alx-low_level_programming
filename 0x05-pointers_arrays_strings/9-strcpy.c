#include "main.h"

/**
 * *_strcpy - Copy strng to a destination
 *
 * @dest: destination param
 * @src: source parame
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
