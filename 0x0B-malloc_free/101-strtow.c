#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* count_words - counts and returns length of string
*
* @str: string to be counted
*
* Return: count of string
*/

int count_words(char *str)
{
	int i, count = 0;
	int non_space = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			non_space = 1;

			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				count++;
			}
		}
	}

	if (non_space == 0)
	{
		return (-1);
	}

	return (count);
}

/**
* strtow - splits string into two words
*
* @str: string to be split
*
* Return: array of strings splitted
*/

char **strtow(char *str)
{
	int i, j, k = 0;
	int length = 0;
	int word_count = count_words(str);
	char **arr;

	if (str == NULL || str[0] == '\0' || word_count == -1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			length = 0;

			for (j = i; str[j] && str[j] != ' '; j++)
			{
				length++;
			}
			arr[k] = malloc(sizeof(char) * (length + 1));
			if (arr[k] == NULL)
			{
				return (NULL);
			}
			for (j = 0; j < length; j++)
			{
				arr[k][j] = str[i++];
			}
			arr[k++][j] = '\0';
			i--;
		}
	}
	arr[k] = NULL;

	return (arr);
}
