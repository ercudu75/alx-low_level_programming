#include "dog.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to a struct dog variable.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
