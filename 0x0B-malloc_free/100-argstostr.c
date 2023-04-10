#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatinates all arguments of program and prints them
*
* @ac: length of arguments
* @av: argument vector
*
* Return: concatinated string from argument vector
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	str = malloc(sizeof(char) * (length + ac + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
