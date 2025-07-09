#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    vector<int> original(N);
    vector<int> sorted;

    for (int i = 0; i < N; i++)
    {
        cin >> original[i];

        sorted.push_back(original[i]);
    }

    // 유니크 정렬
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    unordered_map<int, int> coordMap;

    for (int i = 0; i < sorted.size(); i++)
    {
        coordMap[sorted[i]] = i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << coordMap[original[i]] << " ";
    }

    return 0;
}
