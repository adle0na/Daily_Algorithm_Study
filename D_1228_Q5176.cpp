#include <iostream>

using namespace std;

int main()
{
	int k = 0;

	cin >> k;

	while (k--)
	{
		int p = 0, m = 0;

		cin >> p >> m;

		bool arr[501] = {};

		int cnt = 0;

		for (int i = 0; i < p; i++)
		{
			int now = 0;
			cin >> now;

			if (arr[now])
				cnt++;
			else
				arr[now] = 1;

		}
		cout << cnt << "\n";
	}
}