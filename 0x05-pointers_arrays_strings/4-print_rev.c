#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - prints given string
*
* @s: string to be printed
*
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int length;
	int left;
	int right;

	char temp;

	length = strlen(s);
	left = 0;
	right = length - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;

		right--;
	}

	printf(s);
}
