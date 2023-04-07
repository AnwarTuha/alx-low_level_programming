#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
* print_number - prints given number
*
* @n: number to be printed
*
* Return: void
*/

void print_number(int n)
{
	if (n >= 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}

/**
* isNumber - checks whether given number is digit or not
*
* @number: number to be checked
*
* Return: true if number, false if not
*/

bool isNumber(char number[])
{
	int i = 0;

	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
		{
			return (false);
		}
	}
	return (true);
}

/**
* main - Entree point, adds and displays given arguments
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	print_number(sum);
	putchar('\n');

	return (0);
}
