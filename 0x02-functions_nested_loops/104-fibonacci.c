#include <stdio.h>

/**
 * main - Lists the first 98 fibonnacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 98; i++)
	{
		unsigned long int next = a + b;

		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
