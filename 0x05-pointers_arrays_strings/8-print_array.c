#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_array - prints half of a given string
*
* @a: array of numbers
* @n: number of elements to be printed
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < ((n - 1)))
		{
			printf(", ");
		}
	}
	printf("\n");
}
