#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be created
 * @c: The character to initialize the array
 *
 * Return: A pointer to the created array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *p;

		p = (char *)malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			unsigned int i;

			for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		}
		return (p);
	}
}
