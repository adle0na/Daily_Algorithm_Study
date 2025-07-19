#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> trees(N);
    
    for (int i = 0; i < N; ++i)
    {
        cin >> trees[i];
    }

    vector<int> gaps;
    
    for (int i = 1; i < N; ++i)
    {
        gaps.push_back(trees[i] - trees[i - 1]);
    }

    int interval = gaps[0];
    
    for (int i = 1; i < gaps.size(); ++i)
    {
        interval = gcd(interval, gaps[i]);
    }

    int total = 0;
    
    for (int gap : gaps)
    {
        total += (gap / interval) - 1;
    }

    cout << total << '\n';
    return 0;
}