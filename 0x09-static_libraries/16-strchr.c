#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _strchr - returns pointer to the first occurence of c in s
*
* @s: string where c is to be found
* @c: character to be found in s
*
* Return: pointer to the first occurence of c
*/

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
