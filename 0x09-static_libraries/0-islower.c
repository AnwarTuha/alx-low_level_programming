#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks is a character is lowercase
 *
 * @c: the integer value it receives
 *
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
