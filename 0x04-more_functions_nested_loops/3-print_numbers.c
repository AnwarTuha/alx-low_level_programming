#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_numbers - prints number 0 to 9
*
* Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
