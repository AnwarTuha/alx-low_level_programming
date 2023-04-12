#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array using malloc
*
* @nmemb: array
* @size: size of array
*
* Return: address of the memory created for nmemb
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *address;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	address = calloc(nmemb, size);

	if (address == NULL)
	{
		return (NULL);
	}

	return (address);
}
