#include "main.h"

/**
* main - prints the largest prime factor of 612852475143
* Return: 0
*/

int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
		i++;
	}
	printf("%ld\n", n);

	return (0);
}
