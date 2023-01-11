#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, cnt;

	vector<int> v;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> n;

		v.push_back(n);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		i > v.size() - 2 ? cout << v[i] : cout << v[i] << "\n";
}