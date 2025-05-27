#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string N;
	int B;

	cin >> N >> B;

	long long result = 0;
	int power = 1;

	for (int i = N.size() - 1; i >= 0; --i)
	{
		char ch = N[i];
		int digit;

		if ('0' <= ch && ch <= '9')
		{
			digit = ch - '0';
		}
		else
		{
			digit = ch - 'A' + 10;
		}

		result += digit * power;
		power *= B;
	}

	cout << result << '\n';
	return 0;
}