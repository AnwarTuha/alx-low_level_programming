#include "main.h"

/**
 *  print_alphabet - Entry point, prints lowercase alphabets
 *
 *  Return: success denoted by 0
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
