#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* is_prime_helper - checks if a given number is prime or not
*
* @n: number to be checked
* @i: integer that we increment until we find a
*	  divisor of n or determine that n is prime.
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_helper(int n, int i)
{
	if (n <= 1 || n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
* is_prime_number - checks if a given number is prime or not
*
* @n: number to be checked
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
