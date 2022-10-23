#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int N;

	scanf("%d", &N);

	// i라는 변수를 1부터 받은수 (5)와 같을때까지 반복 1.. 2.. 3.. 4.. 5..
	for (int i = 1; i <= N; i++)
	{
		// k라는 변수를 1부터 받은수 (5) - 위for문 1.. 2.. 3..을 하므로 같아지는건 4번 반복
		for (int k = 1; k <= N-i; k++)
		{
			printf(" ");
		}
		// j라는 변수를 1부터 받은수 (5) 와같을때까지 반복 1.. 2.. 3.. 4.. 5..
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}