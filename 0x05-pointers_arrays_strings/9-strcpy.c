#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcpy - copies contents of string pointed by src to buffer pointed by dest
*
* @dest: varibale to be copied to
* @src: variable to be copied from
*
* Return: value of string copied to
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
