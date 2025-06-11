#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	// 배열 선언후 오름차순 정렬
	int sticks[3] = { a , b ,c };

	sort(sticks, sticks + 3);

	int x = sticks[0];
	int y = sticks[1];
	int z = sticks[2];

	if (z >= x + y)
	{
		z = x + y - 1;
	}

	int perimeter = x + y + z;

	cout << perimeter << '\n';

	return 0;
}