#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int cnt;

	int a, b;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> a >> b;

		cout << lcm(a, b) << " " << gcd(a, b) << "\n";
	}
}
