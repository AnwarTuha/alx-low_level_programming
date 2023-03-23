#include "main.h"

/**
* main - prints the fizzbuzz sequence
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			if (i == 100)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}

	return (0);
}

