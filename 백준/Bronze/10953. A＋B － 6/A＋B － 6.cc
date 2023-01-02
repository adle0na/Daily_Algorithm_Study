#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, cnt;

	char c;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> a >> c >> b;

		cout << a + b << "\n";
	}
}