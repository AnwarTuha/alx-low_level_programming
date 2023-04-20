#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  sum_them_all - adds all of given variadic arguments
 *
 *	@n: number of arguments
 *
 *  Return: sum of given variadic arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
