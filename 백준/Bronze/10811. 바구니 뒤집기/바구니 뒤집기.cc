#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> basket(N);

    for (int i = 0; i < N; ++i)
        basket[i] = i + 1;

    while (M--)
    {
        int i, j;
        cin >> i >> j;

        reverse(basket.begin() + (i - 1), basket.begin() + j);
    }

    for (int i = 0; i < N; ++i)
    {
        cout << basket[i] << (i + 1 == N ? '\n' : ' ');
    }

    return 0;
}
