#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates and prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int first = 1;
	long int second = 2;
	long int sum;

	printf("%ld, %ld", first, second);
	for (i = 0; i < 48 ; i++)
	{
		sum = first + second;
		printf(", %ld", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
