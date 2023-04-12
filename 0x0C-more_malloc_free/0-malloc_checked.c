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
	b = malloc(sizeof(int));

	if (b == NULL)
	{
		printf("%d\n", 98);
	}
	else
	{
		printf("%p\n", b);
	}
}
