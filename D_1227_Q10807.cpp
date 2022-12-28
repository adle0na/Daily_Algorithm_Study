#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	int cnt, num, find;

	cin >> cnt;

	vector<int> v;

	int answer = 0;

	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	cin >> find;

	for (int i = 0; i < cnt; i++)
	{
		if (v[i] == find)
			answer++;
	}

	cout << answer;
}