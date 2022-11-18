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
	ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	int Count, c, v;

	cin >> Count;

	for (int i = 0; i < Count; i++)
	{
		cin >> c >> v;

		int s1 = c / v;
		int s2 = c % v;

		cout << "You get " << s1 << " piece(s) and your dad gets " << s2 << " piece(s).\n";

		c = 0;
		v = 0;
	}
	
}