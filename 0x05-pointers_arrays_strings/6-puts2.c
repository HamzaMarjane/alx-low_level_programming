#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int ln, i;

	ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < ln; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
