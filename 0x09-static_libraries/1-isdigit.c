#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - checks if a character is digit or otherwise
*
* @c: input to be checked
*
* Return: 1 if true, 0 if false
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
