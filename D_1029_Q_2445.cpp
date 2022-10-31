#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	// 1부터 4까지 1 2 3 4 4번
	for (int r = 1; r <= n; r++)
	{
		// 1번.. 2번.. 3번.. 4번.. 
		for (int p = r; p > 0; p--) printf("*");
		for (int q = (2 * n) - (2 * r); q > 0; q--) printf(" ");
		for (int m = r; m > 0; m--) printf("*");
		printf("\n");
	}
	// 4..3..2..1..0  5번
	for (int i = n - 1; i > 0; i--)
	{
		for (int k = i; k > 0; k-- ) printf("*");
		for (int j = (2 * n) - (2 * i); j > 0; j--) printf(" ");
		for (int l = i; l > 0; l--) printf("*");
		printf("\n");
	}
}