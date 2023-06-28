#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, l;
    
    cin >> k >> l;

    unordered_map<string, int> studentID;
    
    for(int i = 0; i < l; i++)
    {
        string number;
        
        cin >> number;
        
        studentID[number] = i;
    }

    vector<pair<string, int>> v;

    for(auto& i : studentID)
        v.push_back(i);
    

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < min(k, (int)v.size()); i++)
        cout << v[i].first << "\n";
    
    return 0;
}
