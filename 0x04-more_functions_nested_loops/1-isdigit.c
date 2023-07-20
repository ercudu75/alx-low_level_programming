#include "main.h"
/**
 * _isdigit - Entry point
 * Description:  function that checks for a digit
 * @c: check for a digit
 * Return: 1 true 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
