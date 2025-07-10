#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    unordered_set<int> cardSet;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        cardSet.insert(num);
    }

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int query;
        cin >> query;
        cout << (cardSet.count(query) ? 1 : 0) << " ";
    }

    return 0;
}
