#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 *  main - entree point, performs operations on argumets
 *
 *	@argc: argument count
 *  @argv: argument vector
 *
 *  Return: 0 if successful, Error otherwise
 *
 */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
