#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	int num;

	vector<int> v;
	vector<int> answer;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), greater<int>());

		answer.push_back(v[2]);

		v.clear();
	}

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;
}