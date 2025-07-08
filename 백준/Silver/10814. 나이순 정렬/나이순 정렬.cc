#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    vector<pair<int, string>> users;

    for (int i = 0; i < N; i++)
    {
        int age;

        string name;

        cin >> age >> name;

        users.push_back({age, name});
    }

    stable_sort(users.begin(), users.end(), [](const pair<int, string>& a, const pair<int, string>& b)
    {
        return a.first < b.first;
    });

    for (const auto& user : users)
    {
        cout << user.first << ' ' << user.second << '\n';
    }

    return 0;
}
