#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main(void)
{
	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
	//ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	int n1, n2;

	int min = -1;

	int sum = 0;

	int cnt = 0;

	cin >> n1 >> n2;

	for (int i = n1; i <= n2; i++)
	{
		for (int j = 1; j <= i; j++)
				i % j == 0 ? cnt++ : 0;
			if (cnt == 2)
			{
				if (min == -1)
					min = i;
				sum += i;
			}
			cnt = 0;
	}
	if (min == -1)
		cout << -1 << "\n";
	else
		cout << sum << "\n" << min << "\n";
}