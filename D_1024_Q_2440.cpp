#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	// i를 입력받은 값부터 (5) 1이 될때까지 반복, 하나씩 줄인다
	for (int i = n; i >= 1; i--)
	{
		// k를 i값부터 1이 될때까지 반복, 하나씩 줄인다
		for (int k = i; k >= 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}