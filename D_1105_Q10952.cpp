#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	while (true)
	{
		int A, B;
		cin >> A >> B;

		if (A == 0 && B == 0)
			break;
		cout << A + B << "\n";
	}
	return 0;
}