#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncat - concatniates two given strings
*
* @dest: destination string to be appended to
* @src: source string to appended to dest
* @n: number indicating how many bytes to use from src
*
* Return: concatinated string from given strings
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
