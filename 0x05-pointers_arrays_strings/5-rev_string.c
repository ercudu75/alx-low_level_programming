#include "main.h"

void rev_string(char *s)
{
	int length = 0;
	int i = 1;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
