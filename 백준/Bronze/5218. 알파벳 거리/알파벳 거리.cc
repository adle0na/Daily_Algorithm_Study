#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int cnt;

	string a, b;
	
	cin >> cnt;

	for(int i = 0; i < cnt; i++)
	{
		cin >> a >> b;

		int* arr = new int[a.size()];

		for (int i = 0; i < a.size(); i++)
			b[i] >= a[i] ?
			arr[i] = b[i] - a[i] : arr[i] = b[i] + 26 - a[i];
		
		cout << "Distances: ";

		for (int i = 0; i < a.size(); i++)
			cout << arr[i] << " ";

		cout << "\n";
	}

}