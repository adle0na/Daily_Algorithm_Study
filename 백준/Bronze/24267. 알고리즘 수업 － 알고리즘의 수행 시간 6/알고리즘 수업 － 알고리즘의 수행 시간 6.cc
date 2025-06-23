#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << n * (n - 1) * (n - 2) / 6 << '\n'; // 수행 횟수 c(n, 3)
    cout << 3 << '\n'; // 최고차항 차수는 3

    return 0;
}