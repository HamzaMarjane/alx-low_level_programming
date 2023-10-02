#include "main.h"

/**
 * _atoi -> Convertion of string format to integer frmt
 *
 * @s: Function variable
 *
 * Return: w*sn
 */

int _atoi(char *s)
{
	int i, sn;
	unsigned int w;

	i = 0;
	sn = 1;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sn *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			w = (w * 10) + (s[i] - '0');
		}
		else if (w > 0)
			break;
		i++;
	}
	return (w * sn);
}
