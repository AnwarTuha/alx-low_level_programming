#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 *  main - prints quote from task 8 in 0x00. C - Hello, World
 *
 *  Return: success denoted by 1
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
