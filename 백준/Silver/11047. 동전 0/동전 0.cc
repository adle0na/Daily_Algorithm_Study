#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int cnt, price;

int answer = 0;

int cmp(int a, int b)
{
	return a > b;
}

int main()
{
	cin >> cnt >> price;

	vector<int> v(cnt);

	for (int i = 0; i < cnt; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < cnt; i++)
	{
		while (price - v[i] >= 0)
		{
			answer++;
			price -= v[i];
		}
	}

	cout << answer;
}