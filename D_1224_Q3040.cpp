#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string words;

	cin >> words;

	vector<char> v;

	for (int i = 0; i < words.size(); i++)
	{
		if ('A' <= words[i] && words[i] <= 'Z' && words[i] != '-')
			v.push_back(words[i]);
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i];
}