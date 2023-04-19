#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 *  array_iterator - write a function that prints given name
 *
 *	@array: array to be iterated
 *	@size: size of given array
 *	@action: function to be called for every element of @array
 *
 *  Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
