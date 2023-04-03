#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* print_chessboard - prints given chessboard
*
* @a: array of 8 by 8 to be printed
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
