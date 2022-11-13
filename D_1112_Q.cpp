#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
	ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	int N;
	cin >> N;

	// 배열 인덱스에 들어갈 변수를 pair로 묶어서 새로운 Vector v를 선언
	vector<pair<pair<int, int>, pair<int, string>>> v(N);

	for (int i = 0; i < N; i++)
	{
		// 이름 날짜 달 년도 순으로 입력
		cin >> v[i].second.second >> v[i].second.first >>
			v[i].first.second >> v[i].first.first;
 	}

	// 재정렬
	sort(v.begin(), v.end());

	// 배열 맨끝 N-1의 이름, 배열 맨 앞 이름 출력 
	cout << v[N - 1].second.second << "\n" << v[0].second.second << "\n";

	return 0;
}