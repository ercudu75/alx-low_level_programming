#include "main.h"
/**
 * swap_int - Entry point
 * @a: Takes the pointer as a parameter
 * @b: Takes the pointer as a parameter
 * Description: swap the value of two integers
 * Return: Nothing we have function void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
