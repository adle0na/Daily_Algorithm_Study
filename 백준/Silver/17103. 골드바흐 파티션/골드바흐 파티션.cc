#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

vector<bool> isNotPrime(MAX + 1, false);

void sieve()
{
    isNotPrime[0] = isNotPrime[1] = true;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (!isNotPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isNotPrime[j] = true;
            }
        }
    }
}

int countGoldbachPartitions(int N)
{
    int count = 0;
    for (int i = 2; i <= N / 2; i++)
    {
        if (!isNotPrime[i] && !isNotPrime[N - i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(); // 소수 미리 계산

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << countGoldbachPartitions(N) << '\n';
    }

    return 0;
}