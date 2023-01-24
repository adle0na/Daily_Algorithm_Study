#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(int in)
{
	string str = to_string(in);

	reverse(str.begin(), str.end());

	return stoi(str);
}
int main()
{
	int x, y, sum;

	cin >> x >> y;

	cout << Rev(Rev(x) + Rev(y));
}