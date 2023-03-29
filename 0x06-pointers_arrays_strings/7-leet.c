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
	char *letters;
	char *numbers;
	int i;
	int j;

	letters = "aAeEoOtTlL";
	numbers = "4300711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}
	}

	return (s);
}
