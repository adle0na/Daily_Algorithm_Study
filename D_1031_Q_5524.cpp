#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	// 학생 수
	cin >> n;
	// vector배열 v 선언 크기는 n
	vector<string>v(n);

	// 학생 수만큼 입력
	for (int i = 0; i < n; i++)
	{
		// 입력받아 벡터 i값에 저장 i = 0.. 1.. 2.. 3.. n..
		cin >> v[i];
		// 소문자 변환 구문 사용법
		transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower);
	}
	// 학생 수만큼 출력
	for (int i = 0; i < n; i++)
	{
		// 벡터 인수 출력할때마다 줄바꿈
		cout << v[i] << '\n';
	}
}