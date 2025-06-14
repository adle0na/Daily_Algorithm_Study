#include <iostream>

using namespace std;

int main()
{
	int x, y, z;

	cin >> x >> y >> z;

	string result;

	if (x == 60 && y == 60 && z == 60)
	{
		result = "Equilateral";
	}
	else if (x + y + z == 180)
	{
		if (x == y || y == z || x == z)
		{
			result = "Isosceles";
		}
		else
		{
			result = "Scalene";
		}
	}
	else
	{
		result = "Error";
	}

	cout << result;
}