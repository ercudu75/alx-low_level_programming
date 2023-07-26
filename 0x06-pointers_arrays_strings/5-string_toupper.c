#include "main.h"

char *string_toupper(char *a)
{
	int i;
	int length = 0;

	while (a[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -=  32;
		}
	}
	return (a);
}
