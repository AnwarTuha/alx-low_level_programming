#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - prints given string
*
* @s: string to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int length;
	int left;
	int right;

	char temp;

	left = 0;
	length = strlen(s);
	right = length - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
