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
	long int first = 0;
	long int second = 1;
	long int sum;

	printf("%ld, %ld, ", first, second);
	for (i = 2; i <= 50 ; i++)
	{
		sum = first + second;
		printf("%ld, ", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
