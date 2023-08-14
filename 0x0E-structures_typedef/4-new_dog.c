#include "dog.h"
#include<stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogg;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dogg = malloc(sizeof(dog_t));
	if (new_dogg == NULL)
		return (NULL);

	new_dogg->age = age;

	new_dogg->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dogg->name == NULL)
	{
		free(new_dogg);
		return (NULL);
	}
	else
	{
		new_dogg->name = _strcpy(new_dogg->name, name);
	}
	new_dogg->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dogg->owner == NULL)
	{
		free(new_dog->name);
		free(new_dogg);
		return (NULL);
	}
	else
	{
		new_dogg->owner = _strcpy(new_dogg->owner, owner);
	}
	return (new_dogg);
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
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
