#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> v;
    
    for(int i=0; i<score.size(); i++)
        v.push_back(score[i][0]+score[i][1]);
    
    for(int i=0; i<v.size(); i++)
    {
    	int cnt=1;
        
        for(int j=0; j<v.size(); j++)
        	if(v[i]<v[j]) cnt++;
        
        answer.push_back(cnt);
    }
    
    return answer;
}