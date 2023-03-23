#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_triangle - prints a triangle from input
*
* @size: integer that indicates size of triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

