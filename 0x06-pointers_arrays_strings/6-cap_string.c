#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"

/**
* cap_string - capitalizes all characters of given string
*
* @str: string that will be capitalized
*
* Return: converted string
*/

char *cap_string(char *str)
{
	bool new_word;
	int i;

	new_word = true;

	for (i = 0; str[i]; i++)
	{
		if (new_word && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
					str[i] == ',' || str[i] == ';' || str[i] == '.' ||
					str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
					str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = true;
		}
	}

	return (str);
}
