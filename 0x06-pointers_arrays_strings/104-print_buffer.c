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

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x%s", b[i + j], (j + 1) % 2 == 0 ? " " : "");
			else
				printf("  %s", (j + 1) % 2 == 0 ? " " : "");
		}
		for (j = 0; j < 10 && i + j < size; j++)
			printf("%c", b[i + j] >= ' ' && b[i + j] <= '~' ? b[i + j] : '.');
		printf("\n");
	}
}

