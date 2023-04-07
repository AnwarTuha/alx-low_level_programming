#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char errorMessage[] = "Error\n";
	int num1;
	int num2;
	int result;
	int i;

	if (argc != 3)
	{
		for (i = 0; i < 6; i++)
		{
			putchar(errorMessage[i]);
		}

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	putchar(48 + result);
	putchar('\n');

	return (0);
}
