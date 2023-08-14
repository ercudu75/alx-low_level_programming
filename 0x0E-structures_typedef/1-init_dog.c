#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog variable to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
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
