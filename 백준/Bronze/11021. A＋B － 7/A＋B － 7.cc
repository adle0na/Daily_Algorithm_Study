#include<iostream>
using namespace std;

int K;

int A, B;

int main()
{
	cin >> K;

	for (int i = 1; i <= K; i++)
	{
		cin >> A >> B;

		cout << "Case #" << i << ": " << A + B << "\n";
	}
}