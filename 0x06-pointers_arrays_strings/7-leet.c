#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet) speak.
 *
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i, j;
	char Letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == Letters[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
