#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_line - prints '_' n times
*
* @n: integer that indicates number of '-'
*
* Return: void
*/

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
