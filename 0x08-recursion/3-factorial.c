#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* factorial - calculates factorial of given number
*
* @n: number from which factorial is calculated
*
* Return: factorial of given number
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
