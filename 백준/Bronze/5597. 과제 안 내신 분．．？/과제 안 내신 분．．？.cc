#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> submitted;
    for (int i = 0; i < 28; i++)
    {
        int number;
        cin >> number;
        submitted.insert(number);
    }

    for (int number = 1; number <= 30; number++)
    {
        if (submitted.find(number) == submitted.end())
        {
            cout << number << '\n';
        }
    }

    return 0;
}
