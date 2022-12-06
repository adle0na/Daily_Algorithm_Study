#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
using namespace std;

int n1, n2, i = 1, cnt;

vector<int> v;

int main(void)
{
	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
	ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	cin >> n1 >> n2;

	// 완전 제곱수 판별 최대값까지 반복
	while (i * i <= n2)
	{
		if (i * i >= n1)
		{
			cnt++;
			v.push_back(i * i);
		}
		i++;
	}
	v.size() == 0 ? cout << -1 :
		cout << accumulate(v.begin(), v.end(), 0) << '\n' << v[0];

	return 0;
}