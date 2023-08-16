#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the
 *		Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0 Always
*/
int main(void)
{
	unsigned long previous = 0, current = 1, next, sum = 0;

	while (current <= 4000000)
	{
		next = previous + current;
		previous = current;
		current = next;
		if (current % 2 == 0)
			sum += current;
	}
	printf("%lu\n", sum);

	return (0);
}
