#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point, prints combinations of single digit numbers
 *
 *  Return: success denoted by 1
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
