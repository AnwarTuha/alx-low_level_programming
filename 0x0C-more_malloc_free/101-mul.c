#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* is_number - checks if given parameter is number digit or not
*
* @str: character to be checked
*
* Return: 1 if true, 0 otherwise
*/
int is_number(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
* multiply - multiplies given numbers, I use this because
*           arguments given to main might be really large
*
* @num1: first number to be multiplied
* @num2: first number to be multiplied
*
* Return: void
*/
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	int i, j;
	int d1, d2, prod, pos1, pos2;
	int sum;
	int start = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			d1 = num1[i] - '0';
			d2 = num2[j] - '0';
			prod = d1 * d2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = prod + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	while (start < len1 + len2 && result[start] == 0)
	{
		start++;
	}
	if (start == len1 + len2)
	{
		printf("0\n");
	}
	else
	{
		for (i = start; i < len1 + len2; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
	free(result);
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
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}

	multiply(num1, num2);

	return (0);
}
