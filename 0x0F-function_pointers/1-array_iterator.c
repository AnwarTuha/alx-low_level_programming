#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 *  array_iterator - write a function that prints given name
 *
 *	@array: string to be printed
 *	@f: modifier function for the name
 *
 *  Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		action(size);
	}
}