#include <iostream>
#include <string>

using namespace std;

int main()
{
	int _case;

	cin >> _case;

	for (int i = 0; i < _case; i++)
	{
		int a, b;

		cin >> a >> b;

		int cnt = 0;
		int sum = 0;

		for (int i = a; i <= b; i++)
		{
			string str = to_string(i);

			for (int j = 0; j < str.length(); i++)
			{
				if (str[j] == '0')
					cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}