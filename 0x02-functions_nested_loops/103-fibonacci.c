#include <stdio.h>

/**
 * main - prints the sum of even numbers in fibonnacci sequence
 * whose values don't exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = 0;
	unsigned long int next;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		next = a + b;

		a = b;
		b = next;
	}
	printf("%lu\n", sum);

	return (0);
}
