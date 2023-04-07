#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - checks if a character is uppercase or otherwise
*
* @c: input to be checked
*
* Return: 1 if true, 0 if false
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
