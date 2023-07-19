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
	unsigned long long int first = 0;
	unsigned long long int second = 1;
	int sum;

	printf("%llu, %llu, ", first, second);
	for (i = 2; i <= 50 ; i++)
	{
		sum = first + second;
		printf("%llu, ", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
