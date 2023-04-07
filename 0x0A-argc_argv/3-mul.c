#include <stdio.h>
#include "main.h"

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
	int i;
	int j;
	int product;
	char errorMessage[] = "Error";

	product = 1;

	if (argc == 0)
	{
		for (i = 0; i < 5; i++)
		{
			putchar(errorMessage[i]);
		}
		putchar('\n');

		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			product = product * argv[i][j];
			j++;
		}
	}

	putchar(48 + product);
	putchar('\n');

	return (0);
}
