#include <vector>
#include <iostream>

using namespace std;

int list[26];

int main()
{
	string s_Code;

	cin >> s_Code;

	for (int i = 0; i < s_Code.size(); i++)
	{
		list[s_Code[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << list[i] << " ";
	}

}