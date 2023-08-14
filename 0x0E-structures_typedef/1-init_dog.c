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
		_strcpy(d->name, name);
		d->age = age;
		_strcpy(d->owner, owner);
}
/**
 * _strcpy - Custom implementation of strcpy to copy strings
 * @ptr: Pointer to the destination character array
 * @p: Pointer to the source character array
 */
void _strcpy(char *ptr, char *p)
{
	while (*p != '\0')
	{
		*ptr = *p;
		ptr++;
		p++;
	}
	*ptr = '\0';
}
