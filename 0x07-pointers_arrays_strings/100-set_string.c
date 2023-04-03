#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* set_string - sets value of given pointer to a char
*
* @s: source pointer
* @to: value of pointer to be set to
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
