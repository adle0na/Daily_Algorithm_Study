#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n;
        cin >> n;

        unordered_map<string, int> clothes;

        for (int i = 0; i < n; i++)
        {
            string name, type;
            cin >> name >> type;
            clothes[type]++;
        }

        int answer = 1;

        for (auto it = clothes.begin(); it != clothes.end(); it++)
        {
            answer *= (it->second + 1);
        }

        cout << answer - 1 << endl;
    }

    return 0;
}