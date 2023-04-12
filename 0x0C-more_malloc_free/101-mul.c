#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
* is_number - checks if given parameter is digit
*
* @str: character to be checked
*
* Return: 1 if true, 0 otherwise
*/

int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}

/**
* main - Entree point, prints out all arguments of program
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success OR
*         98, denoting failure.
*/

int main(int argc, char **argv)
{
	int num1, num2;
	long int result;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	print_number(result);
	putchar('\n');

	return (0);
}

