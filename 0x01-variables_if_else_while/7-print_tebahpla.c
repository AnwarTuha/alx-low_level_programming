#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point, prints numbers 0-9
 *
 *  Return: success denoted by 1
 *
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
