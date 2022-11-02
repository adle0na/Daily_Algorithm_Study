#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = n - 1; i > 0; i--)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}