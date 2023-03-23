#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* more_numbers - prints number 0 to 9 except 2 & 4
*
* Return: void
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
