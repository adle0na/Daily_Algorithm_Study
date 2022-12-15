#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, point_n, point;

	int walk = 0;

	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> point_n;

		for (int j = 0; j < point_n; j++)
		{
			cin >> point;
			v.push_back(point);
		}

		// 내림차순 정렬
		sort(v.begin(), v.end(), greater<>());

		for (int i = 0; i < v.size() - 1; i++)
			walk += (v[i] - v[i + 1]);

		// 거리 계산
		walk += (v[0] - v[v.size() - 1]);

		cout << walk << "\n";

		// 초기화
		walk = 0;
		v.clear();
	}
}