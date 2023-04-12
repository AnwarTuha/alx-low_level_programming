#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - creates array of integers from min to max
*
* @min: initial element of array
* @max: final element of array
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *new_arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	new_arr = malloc(sizeof(int) * (max - min + 1));

	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		new_arr[i] = min;
	}

	return (new_arr);
}
