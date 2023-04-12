#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatinates two strings
*
* @s1: string to be concatinated
* @s2: string to be concatinated
* @n: first n bytes of s2 to be concatinated
*
* Return: pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	strncat(s1, s2, n);

	return (s1);
}
