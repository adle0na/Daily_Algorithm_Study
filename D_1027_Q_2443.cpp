#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);


	// i�� �Է¹����� 5 ���� 1���� �ݺ� 5.. 4.. 3.. 2.. 1.. 5ȸ �ݺ�
	for (int i = n; i > 0; i--)
	{
		// n - i -> (0.. 1.. 2.. 3.. 4.. ) ���
		for (int k = n - i; k > 0; k--)
		{
			printf(" ");
		}
		// 2 * i - 1 -> ( 9.. 7.. 5.. 3.. 1.. ) ���
		for (int j = 2 * i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}