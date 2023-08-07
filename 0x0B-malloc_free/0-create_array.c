#include "main.h"
#include<stdlib.h>
#include<stdio.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	else
	{
		char *p;

		p = (char *)malloc(size * sizeof(char));
		if (p == NULL)
		{
			return NULL;
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
