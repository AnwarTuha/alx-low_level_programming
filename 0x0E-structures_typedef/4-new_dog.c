#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 *  new_dog - create new dog from given parameters
 *
 *	@name: name of new dog
 *	@age: age of new dog
 *	@owner: owner of new dog
 *
 *  Return: new dog struct of type dog_t
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
