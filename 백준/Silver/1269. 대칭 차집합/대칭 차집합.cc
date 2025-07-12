#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int aSize, bSize;
    cin >> aSize >> bSize;

    unordered_set<int> A, B;

    for (int i = 0; i < aSize; ++i)
    {
        int x;
        cin >> x;
        A.insert(x);
    }

    for (int i = 0; i < bSize; ++i)
    {
        int x;
        cin >> x;
        B.insert(x);
    }

    int count = 0;

    // A - B
    for (int x : A)
    {
        if (B.find(x) == B.end())
        {
            count++;
        }
    }

    // B - A
    for (int x : B)
    {
        if (A.find(x) == A.end())
        {
            count++;
        }
    }

    cout << count << '\n';
    
    return 0;
}
