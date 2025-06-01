#include <iostream>
using namespace std;

int main()
{
	int first, second;

	string result;

	while (true)
	{
		cin >> first >> second;

		if (first == 0 && second == 0)
		{
			break;
		}

		if (second % first == 0)
		{
			//약수 체크
			result = "factor\n";
			cout << result;
		}
		else if (first % second == 0)
		{
			//배수 체크
			result = "multiple\n";
			cout << result;
		}
		else
		{
			result = "neither\n";
			cout << result;
		}
	}
}