#include <iostream>
using namespace std;

int main()
{
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    if (a1 <= c && a0 <= (c - a1) * n0)
        cout << 1;
    else
        cout << 0;

    return 0;
}