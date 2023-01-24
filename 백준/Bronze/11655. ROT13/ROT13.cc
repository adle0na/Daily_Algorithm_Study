#include <vector>
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{
	string s;

	getline(cin, s);

	vector<char> v;

	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];

		if (c >= 'a' && c <= 'z')
			c - 'a' < 13 ? c += 13 : c -= 13;
		else if (c >= 'A' && c <= 'Z')
		{
			if (c - 'A' < 13) c += 13;
			else c -= 13;
		}
		s[i] = c;
	}

	cout << s;
}