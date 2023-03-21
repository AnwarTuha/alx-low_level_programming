#include "main.h"

/**
 *  print_alphabet - Entry point, prints lowercase alphabets 10 times
 *
 *  Return: success denoted by 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
