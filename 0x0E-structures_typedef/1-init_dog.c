#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
