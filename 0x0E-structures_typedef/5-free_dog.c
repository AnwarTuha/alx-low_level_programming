#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *  free_dog - frees given dog struct
 *
 *	@d: struct to be freed
 *
 *  Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
