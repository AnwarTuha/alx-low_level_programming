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
	unsigned int unsigned_number;

	unsigned_number = n;

	if (unsigned_number == 0)
	{
		return (1);
	}
	else
	{
		return (unsigned_number * factorial(unsigned_number - 1));
	}
}
