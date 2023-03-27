#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - prints given string
*
* @s: string to be printed
*
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
