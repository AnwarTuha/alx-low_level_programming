#include <string.h>
#include <stdio.h>

/**
 *  main - prints size of various data types
 *
 *  Return: success denoted by 0
 *
 */
int main(void){
	int a;
	long int b;
	long long int c;
	char d;
	float f;
		
	printf("Size of a char: %2d byte(s)\n", sizeof(d));
	printf("Size of an int: %2d byte(s)\n", sizeof(a));
	printf("Size of a long int: %2d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(c));
	printf("Size of a float: %2d byte(s)\n", sizeof(f));
  	return 0;
}
