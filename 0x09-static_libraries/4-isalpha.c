#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks is a character is an alphabet
 *
 * @c: the integer value it receives
 *
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
