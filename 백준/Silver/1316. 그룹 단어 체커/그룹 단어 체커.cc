#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGroupWord(const string& word)
{
    vector<bool> seen(26, false);
    char prev = 0;

    for (char ch : word)
    {
        if (ch != prev)
        {
            if (seen[ch - 'a'])
            {
                return false; // 이전에 등장했던 문자가 다시 등장했으면 그룹 단어 아님
            }
            seen[ch - 'a'] = true;
            prev = ch;
        }
        // 같으면 괜찮음 (연속 중)
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n--)
    {
        string word;

        cin >> word;

        if (isGroupWord(word))
        {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}