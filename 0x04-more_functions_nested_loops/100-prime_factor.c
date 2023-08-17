#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: 0 Always
 */

int main(void)

{

	long x, lrgf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	lrgf = number / x;
	}
	}
	printf("%ld\n", lrgf);
	return (0);

}
