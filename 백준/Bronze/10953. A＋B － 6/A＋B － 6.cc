#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int cnt;

	cin >> cnt;

	string n;

	for (int i = 0; i < cnt; i++)
	{
		cin >> n;

		cout << (int)n[0] + (int)n[2] - 96 << "\n";
	}
}