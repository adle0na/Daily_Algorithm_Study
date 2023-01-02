#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int cnt, n;

	string text;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> n >> text;

		text.erase(text.begin() + n - 1);

		cout << text << "\n";
	}
}