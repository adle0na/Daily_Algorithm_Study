#include <iostream>
#include <vector>
using namespace std;

const int MAX = 246912;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> isNotPrime(MAX + 1, false);
    isNotPrime[0] = isNotPrime[1] = true;

    for (int i = 2; i * i <= MAX; ++i)
    {
        if (!isNotPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isNotPrime[j] = true;
            }
        }
    }

    int n;
    while (cin >> n && n != 0)
    {
        int count = 0;
        for (int i = n + 1; i <= 2 * n; ++i)
        {
            if (!isNotPrime[i])
                count++;
        }
        cout << count << '\n';
    }

    return 0;
}