#include <stdio.h>
#include <string.h>
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
	int length;
	int cap_next;
	int i;
	char c;

	length = strlen(str);
	cap_next = 1;

	for (i = 0; i < length; i++)
	{
		c = str[i];

		if (cap_next && islower(c))
		{
			str[i] = toupper(c);
		}

		cap_next = isspace(c) || c == ',' || c == ';' || c == '.' || c == '!' ||
					c == '?' || c == '\"' || c == '(' || c == ')' || c == '{' ||
					c == '}';
	}

	return (str);
}
