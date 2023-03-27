#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - prints every other element of given string
*
* @str: string to be printed
*
* Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
