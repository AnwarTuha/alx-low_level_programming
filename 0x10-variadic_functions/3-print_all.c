#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_all - prints given arguments with given format
 *
 *	@format: format of each argument
 *
 *  Return: void
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char *separator = "";

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s%s", separator, s);
			else
				printf("(nil)");
			break;

		default:
			break;
		}

		separator = ", ";

		i++;
	}

	printf("\n");
	va_end(args);
}
