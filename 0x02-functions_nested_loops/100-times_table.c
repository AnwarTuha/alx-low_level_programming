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
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int num = i * j;

			if (num == 0)
			{
				putchar('0');
			}
			else
			{
				int reversed_num = 0;

				while (num != 0)
				{
					reversed_num = reversed_num * 10 + num % 10;
					num /= 10;
				}
				while (reversed_num != 0)
				{
					putchar(reversed_num % 10 + '0');
					reversed_num /= 10;
				}
			}
			if (j != n)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
