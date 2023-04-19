#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 *  print_name - write a function that prints given name
 *
 *	@name: string to be printed
 *	@f: modifier function for the name
 *
 *  Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
