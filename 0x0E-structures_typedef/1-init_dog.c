#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *  init_dog - Entry point, intitializes dog struct
 *
 *	@d: pointer to dog struct
 *	@name: name of dog
 *	@age: age of dog
 *	@owner: owner of dog
 *
 *  Return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
