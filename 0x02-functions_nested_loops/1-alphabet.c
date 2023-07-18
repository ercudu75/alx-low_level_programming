#include "main.h"
/**
* print_alphabet - Entry point
* Description: a function that prints the alphabet,
* in lowecase followed by a new line
* Return: void
*/
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
