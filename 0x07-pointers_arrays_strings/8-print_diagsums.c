#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* print_diagsums - prints given chessboard
*
* @a: array of 8 by 8 to be printed
* @size: size of the square array
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum_diag_1;
	int sum_diag_2;
	int i;

	sum_diag_1 = 0;
	sum_diag_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag_1 += a[(size + 1) * i];
		sum_diag_2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum_diag_1, sum_diag_2);
}
