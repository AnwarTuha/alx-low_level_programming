#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last digit of input
 *
 * @n: the integer value it receives
 *
 * Return: integer, last digit of input
 */
int print_last_digit(int n)
{
	return (abs(n) % 10);
}
