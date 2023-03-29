#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"

/**
* leet - encodes given string into 1337.
*
* @s: string to be encoded
*
* Return: encoded string
*/

char *leet(char *s)
{
	char *leet_str;
	int i;
	int j;

	leet_str = s;
	char leet_table[5] = {'4', '3', '0', '7', '1'};
	char original_chars[5] = {'a', 'e', 'o', 't', 'l'};
	char original_chars_upper[5] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == original_chars[j] || s[i] == original_chars_upper[j])
			{
				leet_str[i] = leet_table[j];
				break;
			}
		}
	}

	return (leet_str);
}
