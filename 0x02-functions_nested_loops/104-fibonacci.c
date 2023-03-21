#include <stdio.h>

/**
 * main - Lists the first 98 fibonnacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;

	printf("%llu, %llu", a, b);
	for (int i = 0; i < 96; i++)
	{
		unsigned long long int next = a + b;

		printf(", %llu", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
