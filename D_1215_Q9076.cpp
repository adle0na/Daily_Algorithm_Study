#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// 헤더 정리 완료

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int> v(5);

		for (int j = 0; j < 5; j++)
			cin >> v[j];

		sort(v.begin(), v.end());

		if (v[3] - v[1] >= 4)
		{
			cout << "KIN\n";
			continue;
		}
		int sum = 0;
		for (int k = 1; k < 4; k++)
			sum += v[k];
		cout << sum << "\n";
	}
}