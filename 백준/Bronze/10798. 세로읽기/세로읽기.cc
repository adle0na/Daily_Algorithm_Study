#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> lines(5);

    for (int i = 0; i < 5; ++i)
    {
        getline(cin, lines[i]);
    }

    for (int j = 0; j < 15; ++j)
    {
        for (int i = 0; i < 5; ++i)
        {
            if (j < lines[i].size())
            {
                cout << lines[i][j];
            }
        }
    }

    cout << "\n";
    return 0;
}