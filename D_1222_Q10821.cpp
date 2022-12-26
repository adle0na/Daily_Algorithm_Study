#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nums;

	int answer = 1;

	cin >> nums;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == ',')
			answer++;
	}

	cout << answer;
}