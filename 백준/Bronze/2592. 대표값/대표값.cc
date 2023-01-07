#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, answer;

	int cnt = 10;

	int sum = 0;

	int average;

	vector<int> all;

	vector<int> num;

	vector<pair<int, int>> mode;

	for (int i = 0; i < cnt; i++)
	{
		cin >> n;

		sum += n;

		all.push_back(n);
		num.push_back(n);
	}

	num.erase(unique(num.begin(), num.end()), num.end());
	
	for (int i = 0; i < num.size(); i++)
		mode.push_back(make_pair( 0, num[i]));

	for (int i = 0; i < num.size(); i++)
	{
		for(int j = 0; j < all.size(); j++)
		{
			if (num[i] == all[j])
				mode[i].first++;
		}
	}

	sort(mode.begin(), mode.end());

	reverse(mode.begin(), mode.end());

	average = sum / cnt;

	cout << average << "\n" << mode[0].second;
}