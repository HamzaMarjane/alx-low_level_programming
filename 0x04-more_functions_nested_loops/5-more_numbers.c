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
int mrj;
int mrj1;
for (mrj1 = 0; mrj1 < 10; mrj1++)
{
for (mrj = 0; mrj <= 14; mrj++)
{
if (mrj > 9)
{
_putchar(mrj / 10 + '0');
}
_putchar(mrj % 10 + '0');
}
_putchar('\n');
}
}
