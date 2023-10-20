#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<string> s_list;
    stringstream ss(polynomial);
    string temp;
    int x = 0, y = 0;
    
    while(ss >> temp) s_list.push_back(temp);
    
    for(int i = 0; i < s_list.size(); i++)
    {
        if(s_list[i][s_list[i].size() - 1] == 'x')
            x += s_list[i].size() == 1 ? 1 : stoi(s_list[i].substr(0, s_list[i].size() - 1));
        else if(s_list[i] == "+") continue;
        else y += stoi(s_list[i]);
    }
    
    if(x != 0)
        answer += x == 1 ? "x" : to_string(x) + "x";
    
    if(y != 0)
        answer += answer != "" ? (" + " + to_string(y)) : to_string(y);
    
    return answer;
}