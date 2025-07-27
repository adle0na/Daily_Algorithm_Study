#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    for (int i = N; i <= M; i++)
    {
        if (isPrime(i))
        {
            cout << i << "\n";
        }
    }

    return 0;
}