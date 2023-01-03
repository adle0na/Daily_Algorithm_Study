#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int score, index;

	int sum = 0;

	int answer = 0;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> score;

			sum += score;
		}
		answer < sum ? answer = sum, index = i + 1 : 0;
			
		sum = 0;
	}

	cout << index << " " << answer;

	return 0;
}