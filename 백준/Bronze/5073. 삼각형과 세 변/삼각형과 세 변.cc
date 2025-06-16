#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, z;

	while (true)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0)
			break;

		vector<int> list = { x, y, z };

		sort(list.begin(), list.end());

		if (list[2] >= list[0] + list[1])
		{
			cout << "Invalid" << "\n";
		}
		else if (x == y && y == z)
		{
			cout << "Equilateral" << "\n";
		}
		else if (x == y || y == z || x == z)
		{
			cout << "Isosceles" << "\n";
		}
		else
		{
			cout << "Scalene" << "\n";
		}
	}
}
