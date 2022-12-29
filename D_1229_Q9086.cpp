#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int cnt;

	string text;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> text;

		cout << text[0] << text[text.size() - 1] << "\n";
	}
}