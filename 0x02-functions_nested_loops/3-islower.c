#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *  _islower - checks whether char is lowercase
 *
 *  Return: 1 for true 0 for false
 *
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
