#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int n, p_Count, p_Price;

string p_Name;

vector<int> v;

vector<string> v2;

int main(void)
{
	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
	ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p_Count;
		for (int j = 0; j < p_Count; j++)
		{
			cin >> p_Price >> p_Name;

			v.push_back(p_Price);

			v2.push_back(p_Name);
		}
		int max_idx = max_element(v.begin(), v.end()) - v.begin();

		cout << v2[max_idx] << "\n";

		v.clear();
		v2.clear();
	}
}