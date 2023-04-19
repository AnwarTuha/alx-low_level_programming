#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 *  int_index - searches for index of required element
 *
 *	@array: array to be searched in
 *	@size: size of given array
 *	@cmp: function that compares value of @array
 *
 *  Return: index of element if found, -1 if not
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
