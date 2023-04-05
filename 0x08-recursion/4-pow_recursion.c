#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _pow_recursion - calculates the the power of x to y
*
* @x: number to be raised
* @y: number to raise x to
*
* Return: value of x ^ y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
