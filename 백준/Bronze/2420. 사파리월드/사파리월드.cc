#include <iostream>

using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;

    long long difference = abs(N - M);
    cout << difference;

    return 0;
}
