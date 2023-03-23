#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_square - prints '#' in n squares
*
* @size: integer that indicates dimensions of '#'
*
* Return: void
*/

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
