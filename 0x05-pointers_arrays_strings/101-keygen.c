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

    srand(time(0));
    
	for (i = 0; i < 8; i++)
	{
        password[i] = rand() % 94 + 33;
	}
    
	password[8] = '\0';
    
	printf("%s\n", password);

	return (0);
}
