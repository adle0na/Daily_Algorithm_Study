#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << n * (n - 1) / 2 << '\n'; // 수행 횟수
    cout << 2 << '\n'; // 최고차항 차수는 2

    return 0;
}