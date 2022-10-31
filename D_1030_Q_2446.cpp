#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	for (int r = 0; r < n - 1; r++)
	{
		for (int p = 0; p < r; p++) printf(" ");
		for (int q = 0; q < 2 * (n - r) - 1; q++) printf("*");
		printf("\n");
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int k = 0; k < i; k++ ) printf(" ");
		for (int j = 0; j < 2 * (n - i) - 1; j++) printf("*");
		printf("\n");
	}
}