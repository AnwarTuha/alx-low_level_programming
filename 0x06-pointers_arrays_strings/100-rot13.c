#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* rot13 - encodes given string in rot13.
*
* @s: string to be encoded
*
* Return: encoded string
*/

char *rot13(char *s)
{
	char *current_char;
	char *result = malloc(strlen(s));

	if (s == NULL)
	{
		return (NULL);
	}

	if (result != NULL)
	{
		strcpy(result, s);
		current_char = result;

		while (*current_char != '\0')
		{
			if ((*current_char >= 97 && *current_char <= 122) ||
				(*current_char >= 65 && *current_char <= 90))
			{
				if (*current_char > 109 || (*current_char > 77 && *current_char < 91))
				{
					*current_char -= 13;
				}
				else
				{
					*current_char += 13;
				}
			}
			current_char++;
		}
	}

	return (result);
}
