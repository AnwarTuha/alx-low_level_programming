#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *  print_dog - prints given dog struct
 *
 *	@d: struct to be printed
 *
 *  Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
