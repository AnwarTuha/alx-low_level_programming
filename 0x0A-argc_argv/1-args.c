#include <stdio.h>
#include "main.h"

/**
* main - Entree point, prints out the number of arguments of program
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	putchar(48 + argc);
	putchar('\n');

	return (0);
}
