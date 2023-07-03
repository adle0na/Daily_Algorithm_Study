#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string S;
    cin >> S;

    set<string> substrings;

    int length = S.length();
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j <= length - i; j++)
        {
            string substring = S.substr(i, j);
            
            substrings.insert(substring);
        }
    }

    int count = substrings.size();

    cout << count << endl;

    return 0;
}