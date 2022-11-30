#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
using namespace std;

int main()
{
	int n;

	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;

		sum += (n * n);
	}

	cout << sum % 10;
}