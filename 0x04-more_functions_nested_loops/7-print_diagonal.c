#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_diagonal - prints '\' n times
*
* @n: integer that indicates number of '\'
*
* Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
