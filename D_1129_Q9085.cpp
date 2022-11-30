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
	int n, n2, n3;

	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> n2;
		for (int j = 0; j < n2; j++)
		{
			cin >> n3;

			sum += n3;
		}
		cout << sum << "\n";
		sum = 0;
	}

}