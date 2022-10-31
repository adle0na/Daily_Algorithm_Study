#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	for (int r = 1; r <= n - 1; r++)
	{
		for (int p = 1; p <= n - r; p++)
		{
			printf(" ");
		}
		for (int m = 1; m <= 2 * r - 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = n; i > 0; i--)
	{

		for (int k = n - i; k > 0; k--)
		{
			printf(" ");
		}

		for (int j = 2 * i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}