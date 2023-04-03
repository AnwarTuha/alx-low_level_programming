#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _strspn - returns the count of characters of accept that exist in s
*
* @s: string where accept bytes exist or not
* @accept: bytes of data to look up in s
*
* Return: length of prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
