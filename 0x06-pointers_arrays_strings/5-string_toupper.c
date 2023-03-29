#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* string_toupper - changes all characters of given string to uppercase
*
* @str: string that will be changed to upper case
*
* Return: converted string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}
