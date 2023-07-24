#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte ('\0'), to the buffer pointed
 *           to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length ; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';

	return (dest);
}
