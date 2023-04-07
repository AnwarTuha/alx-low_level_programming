#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcat - concatniates two given strings
*
* @dest: varibale to be appended to
* @src: variable to appended to dest
*
* Return: concatinated string from given strings
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
