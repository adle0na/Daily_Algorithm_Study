#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first) return a.second > b.second;
    
    return a.first < b.first;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    vector<pair<int, int>> v;
    
    sort(numlist.begin(), numlist.end(), greater<>());
    
    for(int i = 0; i < numlist.size(); i++)
        v.push_back(make_pair(abs(numlist[i]-n), numlist[i]));
    
    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < v.size(); i++)
        answer.push_back(v[i].second);
    
    return answer;

}