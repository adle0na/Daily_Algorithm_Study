#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    static int count[10001];

    int N, num;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        while (count[i]--)
        {
            cout << i << '\n';
        }
    }

    return 0;
}
