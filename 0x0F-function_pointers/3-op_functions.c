#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 *  op_add - adds given parameters
 *
 *	@a: integer to be added
 *	@b: integer to be added
 *
 *  Return: result of addition of the two parameters
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *  op_sub - subtracts given parameters
 *
 *	@a: integer to be subtracted
 *	@b: integer to be subtracted
 *
 *  Return: result of subtraction of the two parameters
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *  op_mul - multiplies given parameters
 *
 *	@a: integer to be multiplied
 *	@b: integer to be multiplied
 *
 *  Return: result of multiplication of the two parameters
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *  op_div - divides given parameters
 *
 *	@a: integer to be divided
 *	@b: integer to be divided
 *
 *  Return: result of division of the two parameters
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 *  op_mod - performs modulo on given parameters
 *
 *	@a: integer to be divided and checked for modulo
 *	@b: integer to be divided and checked for modulo
 *
 *  Return: result of modulo of the two parameters
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
