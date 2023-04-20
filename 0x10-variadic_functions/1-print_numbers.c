#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_numbers - pints given arguments with a separator between them
 *
 *	@separator: string to be added between each element
 *	@n: number of arguments
 *
 *  Return: void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
