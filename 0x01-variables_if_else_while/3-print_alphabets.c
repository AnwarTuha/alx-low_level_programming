#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point, prints all alphabets
 *
 *  Return: success denoted by 1
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
