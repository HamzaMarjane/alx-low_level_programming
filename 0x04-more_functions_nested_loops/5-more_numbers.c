#include "main.h"

/**
 * more_numbers - printing nbrs from 0 to 14 10 times.
 *
 * Return: 0 always
 *
 *
 */

void more_numbers(void)
{
int sec;
int sec1;
for (sec1 = 0; sec1 < 10; sec1++)
{
for (sec = 0; sec <= 14; sec++)
{
if (sec > 9)
{
_putchar(sec / 10 + '0');
}
_putchar(sec % 10 + '0');
}
_putchar('\n');
}
}
