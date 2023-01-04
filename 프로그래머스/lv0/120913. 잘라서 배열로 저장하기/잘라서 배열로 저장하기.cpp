#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int str = my_str.size();
    
    for(int i = 0; i < (str / n); i++)
        answer.push_back(my_str.substr(i * n, n));
    
    if(str % n != 0)
        answer.push_back(my_str.substr(str - (str % n)));
        
    return answer;
}