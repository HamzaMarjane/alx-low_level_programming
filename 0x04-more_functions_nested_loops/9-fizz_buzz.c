#include <stdio.h>

/**
 * main - Fizzbuzz famous problem.
 *
 * Return: 0 always
 */

int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
{
	if ((x % 3 == 0) && (x % 5 == 0))
	printf("FizzBuzz\t");
	else if (x % 3 == 0)
	printf("Fizz\t");
	else if (x % 5 == 0)
	printf("Buzz\t");
	else
	printf("%d\t", x);
}


	return (0);
}
