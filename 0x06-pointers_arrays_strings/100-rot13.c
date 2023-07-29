#include "main.h"
/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char change[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		while (alpha[j])
		{
			if (s[i] ==  alpha[j])
			{
				s[i] = change[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
