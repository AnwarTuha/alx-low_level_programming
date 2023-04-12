#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

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

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

