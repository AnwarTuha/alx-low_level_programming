#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _strlen_recursion - returns length of given string
*
* @s: string to be checked
*
* Return: length of given string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
