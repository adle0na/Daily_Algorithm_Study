#include <iostream>
#include <string>

using namespace std;

string aString = "";
string bString = "";

int caseCount;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> caseCount;

    for (int i = 0; i < caseCount; i++)
    {
        cin >> aString >> bString;
        
        if (aString.size() != bString.size())
        {
            cout << "Impossible\n";

            continue;
        }

        int alpahbets[26] = { 0, };

        for (int i = 0; i < aString.size(); i++)
        {
            alpahbets[aString[i] - 'a']++; 
        }

        bool possible = true;

        for (int i = 0; i < bString.size(); i++)
        {
            if (--alpahbets[bString[i] - 'a'] < 0)
            {
                possible = false;
                cout << "Impossible\n";
                break;
            }
        }

        if (possible)
            cout << "Possible\n";
    }

    return 0;
}