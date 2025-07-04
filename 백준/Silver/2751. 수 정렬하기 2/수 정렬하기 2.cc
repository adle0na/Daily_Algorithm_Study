#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	vector<int> list(N);

	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
	}

	sort(list.begin(), list.end());

	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << '\n';
	}

	return 0;
}
