#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_set<string> unheard;
    vector<string> result;

    // 첫번째 체크
    for (int i = 0; i < N; ++i)
    {
        string name;
        cin >> name;
        unheard.insert(name);
    }
    
    // 두번째 체크
    for (int i = 0; i < M; ++i)
    {
        string name;
        cin >> name;
        if (unheard.find(name) != unheard.end())
        {
            result.push_back(name);
        }
    }

    // 사전순 정렬
    sort(result.begin(), result.end());

    // 출력
    cout << result.size() << "\n";

    for (const string& name : result)
    {
        cout << name << "\n";
    }

    return 0;
}
