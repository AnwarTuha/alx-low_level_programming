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
	int cents;
	int coins;

	if (argc != 2)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');

		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents < 0)
	{
		putchar('0');
		putchar('\n');

		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	print_number(coins);
	putchar('\n');

	return (0);
}