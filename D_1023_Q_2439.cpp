#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int N;

	scanf("%d", &N);

	// i��� ������ 1���� ������ (5)�� ���������� �ݺ� 1.. 2.. 3.. 4.. 5..
	for (int i = 1; i <= N; i++)
	{
		// k��� ������ 1���� ������ (5) - ��for�� 1.. 2.. 3..�� �ϹǷ� �������°� 4�� �ݺ�
		for (int k = 1; k <= N-i; k++)
		{
			printf(" ");
		}
		// j��� ������ 1���� ������ (5) �Ͱ��������� �ݺ� 1.. 2.. 3.. 4.. 5..
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}