#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two given strings
*
* @s1: string to be concatinated
* @s2: string to be concatinated
*
* Return: new concatinated string from given strings
*/

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int length_1 = 0;
	int length_2 = 0;

	if (s1 != NULL)
	{
		length_1 = strlen(s1);
	}

	if (s2 != NULL)
	{
		length_2 = strlen(s2);
	}

	new_str = malloc(length_1 + length_2 + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(new_str, s1);
	}

	if (s2 != NULL)
	{
		strcpy(new_str + length_1, s2);
	}

	return (new_str);
}
