#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	// i를 0부터 n-1(4) 까지 (5)번 반복
	for (int i = 0; i <= n - 1; i++)
	{
		// k를 0부터 i(0.. 1.. 4) 까지 (0.. 1.. 4..번 반복)
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}
		// j를 1부터 n-1(5.. 4.. 1..) 까지 (5.. 4.. 1번 반복)
		for (int j = 1; j <= n - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}