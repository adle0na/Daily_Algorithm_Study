#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int length = (1 << n) + 1; // 2^n + 1
    int result = length * length;

    cout << result << '\n';
    return 0;
}