#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 * Descriptipon: prints the sum
 * of the even-valued terms
 * Return: Always 0 (success)
*/
int main(void)
{
	long int i = 0;
	long int pre = 1;
	long int curr = 2;
	long int next;
	long int sum;

	while (i < 4000000)
	{
		next = pre + curr;
		pre = curr;
		curr = next;

		if (curr % 2 == 0)
		{
			/* sum = sum + curr */
			sum += curr;
		}
		printf("%ld\n", sum);
	}

	return (0);
}
