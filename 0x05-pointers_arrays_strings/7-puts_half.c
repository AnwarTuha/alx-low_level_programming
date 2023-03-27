#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - prints half of a given string
*
* @str: string to be printed
*
* Return: void
*/

void puts_half(char *str)
{
	int length;
	int i;
	int start;

	length = strlen(str);

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar("\n");
}
