#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _memcpy - copies bytes of data from one address to another
*
* @dest: memory (address) to be filled
* @src: memory to be copied from
* @n: the first bytes of data to be copied from src
*
* Return: pointer to memory area of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
