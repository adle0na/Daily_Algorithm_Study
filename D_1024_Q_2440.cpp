#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	// i�� �Է¹��� ������ (5) 1�� �ɶ����� �ݺ�, �ϳ��� ���δ�
	for (int i = n; i >= 1; i--)
	{
		// k�� i������ 1�� �ɶ����� �ݺ�, �ϳ��� ���δ�
		for (int k = i; k >= 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}