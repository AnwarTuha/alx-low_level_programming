#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * times_table - prints 9 times table
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product >= 10)
			{
				_putchar('0' + product / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + product % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
