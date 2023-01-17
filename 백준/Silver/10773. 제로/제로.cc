#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int cnt, n;

    vector<int> v;

    int sum = 0;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> n;

        if (n == 0) v.pop_back();
        else v.push_back(n);
    }
    
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    
    cout << sum;
}