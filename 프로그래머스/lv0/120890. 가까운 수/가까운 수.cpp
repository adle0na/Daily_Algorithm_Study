#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    
    int answer = 0;
    
    vector<pair<int, int>> v;
    
    for(int i = 0; i < array.size(); i++)
        v.push_back(make_pair(abs(array[i] - n), array[i]));

    sort(v.begin(), v.end());
    
    return v[0].second;
}

