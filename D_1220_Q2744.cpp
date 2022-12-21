#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words;

	cin >> words;

	for (int i = 0; i < words.size(); i++)
	{
		if ('A' <= words[i] && words[i] <= 'Z')
			words[i] += 32;
		else
			words[i] -= 32;
	}

	cout << words;
}