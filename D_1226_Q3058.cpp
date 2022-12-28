#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int cnt, num;

	int sum = 0;

	vector<int> v;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cin >> num;
			if (num % 2 == 0 && num != 0)
			{
				sum += num;
				v.push_back(num);
			}
			sort(v.begin(), v.end());
		}
		cout << sum << " " << v[0] << "\n";

		v.clear();
		sum = 0;
	}
}