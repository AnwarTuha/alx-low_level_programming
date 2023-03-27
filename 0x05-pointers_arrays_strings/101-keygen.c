#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry, program that generates passwords
*
* Return: void
*/

int main(void)
{
	int i;
	char password[9];
	int checksum = 2772;

	srand(time(NULL));

	for (i = 0; i < 8; i++)
	{
		password[i] = rand() % 128;
		checksum -= password[i];
	}

	password[8] = checksum;

	printf("%s\n", password);

	return (0);
}
