#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	// 위치한 그룹 계산 값
	int group = 1;
	int sum = 1; // 누적합

	while (x > sum)
	{
		group++;
		sum += group;
	}
	
	// 그룹 내부의 위치 계산
	int posInGroup = x - (sum - group);

	int numerator, denominator;

	// 짝수 그룹
	if (group % 2 == 0)
	{
		numerator = posInGroup; // 분자 = 그룹안에 위치
		denominator = group - posInGroup + 1; // 분모 = 반대방향
	}
	else // 홀수 그룹
	{
		numerator = group - posInGroup + 1; // 위에서 아래로 내려옴
		denominator = posInGroup;
	}

	cout << numerator << "/" << denominator << '\n';
}