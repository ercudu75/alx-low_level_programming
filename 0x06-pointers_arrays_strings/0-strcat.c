#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	int length1, length2;

	length1 = 0;
	length2 = 0;
	while (src[length1] != '\0')
	{
		length1++;
	}
	while (dest[length2] != '\0')
	{
		length2++;
	}

	for (i = length1; i <= length1 + length2 - 1; i++)
	{
		for (j = 0; j < length1; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
