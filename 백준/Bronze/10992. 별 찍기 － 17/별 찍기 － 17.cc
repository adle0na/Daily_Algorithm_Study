#include<iostream>
#include<string>

using namespace std;

int main()
{
	int cnt;

	cin >> cnt;

	for (int i = 1; i <= cnt; i++)
	{
		for (int j = 1; j <= cnt - i; j++)
			cout << " ";
		
		if (i == 1 || i == cnt)
		{
			for (int j = 1; j <= (i - 1) * 2 + 1; j++)
				cout << "*";
		}
		else
		{
			cout << "*";
			for (int j = 1; j <= (i - 1) * 2 - 1; j++)
				cout << " ";

			cout << "*";
		}
		cout << "\n";
	}
}