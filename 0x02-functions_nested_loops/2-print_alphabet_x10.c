#include "main.h"

/**
 *  print_alphabet_x10 - Entry point, prints lowercase alphabets 10 times
 *
 *  Return: success denoted by 0
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
