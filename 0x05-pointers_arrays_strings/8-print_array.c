#include "main.h"
#include<stdio.h>

void print_array(int *a, int n)
{
	int i;

	printf("%d,",a[0]);
	for (i = 1; i < n; i++)
	{
		if (a[i] != a[n-1])
		{
			printf(" %d,",a[i]);
		}
		else {
			printf(" %d",a[n-1]);
		}
	}
	printf("\n");
}
