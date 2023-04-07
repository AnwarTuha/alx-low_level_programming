#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* print_number - prints given number
*
* @n: number to be printed
*
* Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}


/**
* main - Entree point, prints out all arguments of program
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	print_number(result);
	putchar('\n');

	return (0);
}
