#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncpy - copies one string to another
*
* @dest: destination string to be copied to
* @src: source string to copy from
* @n: number indicating how many bytes to copy from src
*
* Return: copied string from src string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
