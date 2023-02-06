#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int cnt, n1, n2;

    vector<pair<int, int>> v;

    cin >> cnt;
    
    for(int i = 0; i < cnt; i++)
    {
        cin >> n1 >> n2;

        pair<int, int> var = make_pair(n2, n1);
        
        v.push_back(var);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i].second << " " << v[i].first << "\n";
}
