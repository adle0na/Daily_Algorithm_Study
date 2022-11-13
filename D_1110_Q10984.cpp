#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	// 학기의 수
	int T;

	cin >> T;

	// 소수점 첫째자리 출력
	cout << fixed;
	cout.precision(1);

	// 학기 만큼 반복
	for (int i = 0; i < T; i++)
	{
		// 줄수, 학점
		int line, C = 0;
		
		// 성적
		double G = 0.0;

		cin >> line;
		// 줄수 만큼 반복
		for (int j = 0; j < line; j++)
		{
			// 입력 학점
			int temp_C;
			// 입력 성적
			double temp_G;

			cin >> temp_C >> temp_G;
			
			// 입력 학점 연산
			C += temp_C;
			// 입력 성적 연산
			G += temp_G * temp_C;
		}

		// 최종 학점, 성적 출력
		cout << C << " " << G / C << "\n";
	}

}