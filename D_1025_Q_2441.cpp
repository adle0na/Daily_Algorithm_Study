#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	// i�� 0���� n-1(4) ���� (5)�� �ݺ�
	for (int i = 0; i <= n - 1; i++)
	{
		// k�� 0���� i(0.. 1.. 4) ���� (0.. 1.. 4..�� �ݺ�)
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}
		// j�� 1���� n-1(5.. 4.. 1..) ���� (5.. 4.. 1�� �ݺ�)
		for (int j = 1; j <= n - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}