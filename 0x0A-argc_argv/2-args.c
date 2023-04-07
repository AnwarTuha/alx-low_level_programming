#include <stdio.h>
#include "main.h"

/**
* main - Entree point, prints out all arguments of program
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		putchar(argv[i]);
	}

	putchar('\n');

	return (0);
}
