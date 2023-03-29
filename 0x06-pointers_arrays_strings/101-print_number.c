#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* print_number - prints out given integer
*
* @n: integer to be printed
*
* Return: void
*/

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar(x % 10 + '0');
}

