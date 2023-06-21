#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int K;
	
	cin >> K;

	if (K % 4 == 0 && K % 100 != 0)
		cout << 1;
	else if (K % 400 == 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}