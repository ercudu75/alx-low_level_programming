#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description: a function that prints the alphabet 10 times,
* in lowecase followed by a new line
* Return: void
*/
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i < 10; i++)
	{
		n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}

}
