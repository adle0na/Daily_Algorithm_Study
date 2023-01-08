#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n1, n2;

    int sum = 0;

    cin >> n1 >>n2;

    vector<int> v;
    
    for(int i = 1; i <= n2; i++)
    {
        for(int j = 1; j <= i; j++)
            v.push_back(i);
    }

    for(int i = n1 - 1; i < n2; i++)
        sum += v[i];

    cout << sum;
}
