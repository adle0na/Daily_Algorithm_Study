#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int input;

	cin >> input;

	vector<int> soin;

    for (int i = 2; i * i <= input; ++i)
    {
        while (input % i == 0)
        {
            cout << i << "\n";

            input /= i;
        }
    }

    if (input > 1)
    {
        cout << input << "\n";
    }

    return 0;
}