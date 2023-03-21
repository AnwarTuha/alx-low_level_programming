#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - prints last digit of input
 *
 * @n: the integer value it receives
 *
 * Return: integer, last digit of input
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
