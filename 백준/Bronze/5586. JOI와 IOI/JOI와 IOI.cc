#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int j_C = 0, i_C = 0;

	string str;

	cin >> str;

	for (int i = 0; i < str.size() - 2; i++)
	{
		if (str.substr(i, 3) == "JOI")
			j_C++;
		else if (str.substr(i, 3) == "IOI")
			i_C++;
	}

	cout << j_C << "\n" << i_C;
}

