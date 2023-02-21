#include<iostream>
#include<algorithm>

using namespace std;

int m[4] = { 25, 10, 5, 1 }, t, c;

int main()
{
	cin >> t;

	while (t--)
	{
		cin >> c;
		for (int i = 0; i < 4; i++)
		{
			cout << c / m[i] << " ";
			c %= m[i];
		}
		cout << "\n";
	}
}

