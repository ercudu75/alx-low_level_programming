#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded).
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 1024;
	int i, sum;

	sum = 0;

	for (i = 0; i < num ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
