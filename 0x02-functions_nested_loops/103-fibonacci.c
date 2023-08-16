#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the
 *		Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0 Always
*/
int main(void)
{
	unsigned long previous = 0, curr = 1, next, sum = 0;

	while (curr <= 4000000)
	{
		next = prev + curr;
		previous = curr;
		curr = next;
		if (curr % 2 == 0)
			sum += curr;
	}
	printf("%lu\n", sum);

	return (0);
}
