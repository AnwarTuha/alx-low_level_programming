#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _strpbrk - locates the first occurrence in the string s
*			 of any of the bytes in the string accept
*
* @s: string where accept bytes exist or not
* @accept: bytes of data to look up in s
*
* Return: pointer to the byte of s that matches bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
