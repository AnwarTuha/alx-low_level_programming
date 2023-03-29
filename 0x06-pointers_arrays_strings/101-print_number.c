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
	int i = 1;
	int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (temp)
	{
		i *= 10;
		temp /= 10;
	}

	i /= 10;

	while (i >= 1)
	{
		_putchar((n / i) + '0');
		n %= i;
		i /= 10;
	}
}

