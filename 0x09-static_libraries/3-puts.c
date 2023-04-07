#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _puts - prints given string
*
* @str: string to be printed
*
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
