#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* print_buffer - prints buffer until given size
*
* @b: buffer to be printed
* @size: size of buffer to be printed
*
* Return: void
*/

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%20x", b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if ((j + 1) % 2 == 0)
			{
				printf(" ");
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (j + 1 < size)
			{
				if (isprint(b[i + j]))
				{
					printf("%c", b[i + j]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
