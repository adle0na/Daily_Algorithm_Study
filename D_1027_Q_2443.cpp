#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);


	// i를 입력받은값 5 부터 1까지 반복 5.. 4.. 3.. 2.. 1.. 5회 반복
	for (int i = n; i > 0; i--)
	{
		// n - i -> (0.. 1.. 2.. 3.. 4.. ) 출력
		for (int k = n - i; k > 0; k--)
		{
			printf(" ");
		}
		// 2 * i - 1 -> ( 9.. 7.. 5.. 3.. 1.. ) 출력
		for (int j = 2 * i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}