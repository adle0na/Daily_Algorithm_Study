#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int cnt, num;

	cin >> cnt;

	vector<int> v;

	for (int i = 0; i < cnt; i++)
	{
		cin >> num;

		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << v[0] << " " << v[v.size() - 1];
}