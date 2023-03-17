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
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		printf("%d", ch);
	}

	return (0);
}
