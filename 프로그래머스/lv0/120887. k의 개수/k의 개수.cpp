#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    string numm;
    
    for(int num = i; num <= j; num++)
    {
        numm = to_string(num);
        
        for(int idx = 0; idx < numm.size(); idx++)
            k == numm[idx] - '0' ? answer += 1 : 0;
    }
    return answer;
}