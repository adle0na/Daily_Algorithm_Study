#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);


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