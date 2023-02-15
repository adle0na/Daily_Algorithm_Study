#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int man, mm, m1, m2;

    vector<int> v;

    cin >> man >> mm;

    m1 = man * mm;

    for(int i = 0; i < 5; i++)
    {
        cin >> m2;

        v.push_back(m2);
    }

    for(int i = 0; i < 5; i++)
        cout << v[i] - m1 << " ";
}
