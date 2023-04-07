#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _strstr - checks the first occurence of substring needle in string haystack
*
* @haystack: string look in
* @needle: string to be searched
*
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
