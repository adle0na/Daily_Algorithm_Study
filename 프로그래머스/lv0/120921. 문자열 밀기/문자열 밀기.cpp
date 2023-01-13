#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    bool check = false;
    
    if(A==B) return 0;
    
    int As = A.size() - 1;
    
    for(int i = 0; i < As; i++)
    {
        char s = A[As];
        A = A.substr(0, As);
        A = s + A;
        
        answer++;
        
        if(A==B)
        {
            check = true;
            break;
        }
    }
    
    if(check) return answer;
    else return -1;
}