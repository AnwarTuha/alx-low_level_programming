#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
*
* @b: variable to which memory will be allocated to
*
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);

	if (address == NULL)
	{
		exit(98);
	}

	printf("%p\n", address);
}
