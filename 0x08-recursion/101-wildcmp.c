#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* wildcmp - checks if two given string are identical
*
* @s1: string to be compared to s2
* @s2: string to be compared to s1
*
* Return: 1 if identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
