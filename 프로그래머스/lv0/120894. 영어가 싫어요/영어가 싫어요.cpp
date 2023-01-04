#include <string>
#include <vector>

using namespace std;

vector<string> v = {"zero", "one", "two", "three", "four",
                   "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;
    
    int tmp;
    
    for(int i = 0; i < v.size(); i++)
    {
        while ((tmp = numbers.find(v[i])) != string::npos)
            numbers.replace(tmp, v[i].size(), to_string(i));
    }
    answer = stoll(numbers);
    
    return answer;
}