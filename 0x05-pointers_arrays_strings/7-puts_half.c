#include "main.h"

void puts_half(char *str)
{
	int n;
	int length_of_the_string = 0;
	int i = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 != 0)
	{
		for (i = 0; i <= n; i++ )
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length_of_the_string/2; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
