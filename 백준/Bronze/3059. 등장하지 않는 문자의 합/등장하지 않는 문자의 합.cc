#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int test;
	string str;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> str;

		int arr[26] = { 0 };
		int cnt = 0;

		for (int i = 0; i < str.size(); i++)
		{
			cnt = str[i] - 65;
			arr[cnt]++;
		}

		int sum = 0;

		for (int i = 0; i < 26; i++)
		{
			if (arr[i] == 0)
				sum += (i + 65);
		}

		cout << sum << "\n";
	}
	return 0;
}