#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	// 입력받는 수
	int num;
	// 반복인자
	int i, j, k;

	cin >> num;

	for (i = 0; i < num; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < num; j++)
			{
				cout << "*" << " ";
			}
			cout << "\n";
		}
		else
		{
			for (k = 0; k < num; k++)\
			{
				cout << " " << "*";
			}
			cout << "\n";
		}
	}
	return 0;
}