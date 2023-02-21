#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 * seperated by a coma followed by a space
 *
 * Return: always 0
 */
int main(void)
{
	int count;

	unsigned long fib1 = 1, fib2 = 2, sum;

	for (count = 1; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
