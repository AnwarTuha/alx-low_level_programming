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
* main - Entree point, prints the minimum number of
*		coins to make change for an amount of money
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}

	print_number(coins);
	putchar('\n');

	return (0);
}
