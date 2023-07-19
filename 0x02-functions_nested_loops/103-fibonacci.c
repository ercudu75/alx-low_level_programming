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
	long int pre = 1;
	long int curr = 2;
	long int next;
	long int sum = 0;

	while (curr < 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		next = pre + curr;
		pre = curr;
		curr = next;

	}
	printf("%ld\n", sum);

	return (0);
}
