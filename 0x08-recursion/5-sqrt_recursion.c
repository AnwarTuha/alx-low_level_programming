#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* square_root - calculates the square root of given number recursively
*
* @n: number to be square rooted
* @i: integer to be incremented until square root of number is found
*
* Return: value of square root of number
*/

int square_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, i + 1));
	}
}

/**
* _sqrt_recursion - calculates the square root of given number
*
* @n: number to be square rooted
*
* Return: value of square root of number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 0));
	}
}

