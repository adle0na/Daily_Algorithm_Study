#include <vector>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string s_Code;

	while (1)
	{
		getline(cin, s_Code);

		if (s_Code == "END")
		{
			break;
		}

		reverse(s_Code.begin(), s_Code.end());

		cout << s_Code << "\n";
	}
}