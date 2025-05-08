#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int bascketSize, inputCount;

	cin >> bascketSize >> inputCount;

	vector<int> basket(bascketSize + 1, 0);

	while (inputCount--)
	{
		int a, b, c;

		cin >> a >> b >> c;

		for (int j = a; j <= b; ++j)
		{
			basket[j] = c;
		}
	}

	for (int i = 1; i <= bascketSize; i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}