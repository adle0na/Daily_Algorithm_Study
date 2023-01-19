#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cnt, n, score;

    cin >> cnt;

    vector<int> v;

    vector<int> v2;
    
    for(int i = 0; i < cnt; i++)
    {
        cin >> n;

        for(int j = 0 ; j < n; j++)
        {
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end(), greater<>());

        for(int k = 0; k < v.size() - 1; k++)
        {
            int x = v[k] - v[k+1];
            
            v2.push_back(x);
        }

        sort(v2.begin(), v2.end(), greater<>());
        
        int max = v[0];
        int min = v[v.size() - 1];
        int gap = v2[0];
        
        cout << "Class " << i + 1 << "\n";
        cout << "Max " << max << ", Min " << min << ", Largest gap" << " " << gap << "\n";

        v.clear();
        v2.clear();
    }
}