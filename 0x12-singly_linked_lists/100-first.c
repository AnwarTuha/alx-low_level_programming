#include <stdlib.h>
#include <stdio.h>

void pre_main(void) __attribute__ ((constructor));

/**
 *  pre_main - called before main
 *
 *  Return: void
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
