#include "main.h"
#include<stdio.h>

void print_array(int *a, int n)
{
	int i;

	printf("%d,",a[0]);
	for (i = 1; i < n; i++)
	{
			printf(" %d,",a[i]);
	}
	printf("\n");
}
