#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int str_ln = 0;
	int i = 0;

	while (str[str_ln])
		str_ln++;

	i = (str_ln % 2 == 0) ? str_ln / 2 : (str_ln + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
