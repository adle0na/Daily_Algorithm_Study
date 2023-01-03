#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int q = i; q <= j; q++)
    {
        int p = q;
        
        while(1)
        {
            if(p == 0)
                break;
            
            if(p%10 == k)
                answer++;
            
            p/=10;
        }
    }
    
    return answer;
}