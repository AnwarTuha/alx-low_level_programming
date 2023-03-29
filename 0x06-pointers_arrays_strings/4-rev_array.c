#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* reverse_array - reverses given array
*
* @a: array to be reversed
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
