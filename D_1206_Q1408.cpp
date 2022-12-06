#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <string>
#include <ctime>
#include <cstdio>
using namespace std;

// 시간 구조체
struct Time
{
	int h;
	int m;
	int s;
	Time operator-(const Time& time)
	{
		h -= time.h;
		m -= time.m;
		s -= time.s;

		if (h < 0)
		{
			h = 24 + h;
		}
		if (s < 0)
		{
			s = 60 + s;
			m -= 1;
		}
		if (m < 0)
		{
			m = 60 + m;
			h -= 1;
		}

		return { h, m, s };
	}
};

Time stringToTime(const string time)
{
	Time t{};

	t.h = stoi(time.substr(0, 2));
	t.m = stoi(time.substr(3, 2));
	t.s = stoi(time.substr(6, 2));

	return t;
}


int main(void)
{
	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
	ios_base::sync_with_stdio(0);

	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
	cin.tie(0);

	string startTime, nextTime;

	cin >> startTime >> nextTime;

	Time answer = stringToTime(nextTime) - stringToTime(startTime);

	printf("%02d:%02d:%02d", answer.h, answer.m, answer.s);
}