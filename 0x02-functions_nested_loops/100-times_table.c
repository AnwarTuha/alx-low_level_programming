#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_times_table - function that prints table from n
 *
 * @n: starting num of table
 */
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%d", i * j);
			if (j != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
