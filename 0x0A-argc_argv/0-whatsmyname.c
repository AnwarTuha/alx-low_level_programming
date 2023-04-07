#include <stdio.h>

/**
* main - Entree point, prints out the name of the program
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0, denoting success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}

	putchar('\n');

	return (0);
}
