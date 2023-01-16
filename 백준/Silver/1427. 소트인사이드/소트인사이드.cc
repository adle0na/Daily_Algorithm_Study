#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	string str;

	vector<int> v;

	cin >> n;

	str = to_string(n);

	for (int i = 0; i < str.size(); i++)
		v.push_back(str[i] - '0');

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
		cout << v[i];
}