#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 2; i * i <= n; i++)
    {
        while(n%i == 0)
        {
            answer.push_back(i);
            n /= i;
        }   
    }
    if(n > 1)
        answer.push_back(n);
    
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}