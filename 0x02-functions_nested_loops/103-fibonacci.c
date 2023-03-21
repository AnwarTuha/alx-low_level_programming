#include <stdio.h>

/**
 * main - prints the sum of even numbers in fibonnacci sequence
 * whose values don't exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		long int next = a + b;

		a = b;
		b = next;
	}
	printf("%lu\n", sum);

	return (0);
}
