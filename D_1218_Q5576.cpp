#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;

	int score;

	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> score;

		if (i < 10)
			v1.push_back(score);
		else
			v2.push_back(score);
	}
	sort(v1.begin(), v1.end(), greater<int>());
	sort(v2.begin(), v2.end(), greater<int>());

	for (int i = 0; i < 3; i++)
	{
		sum1 += v1[i];
		sum2 += v2[i];
	}

	cout << sum1 << " " << sum2;

}