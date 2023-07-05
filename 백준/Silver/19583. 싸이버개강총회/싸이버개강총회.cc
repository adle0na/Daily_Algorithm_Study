#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, e, q;
    cin >> s >> e >> q;

    cin.ignore();  // Ignore the newline character left in the input buffer

    unordered_map<string, string> dic;
    unordered_map<string, int> answer;

    string line;

    // Read lines until the end of input
    while (getline(cin, line))
    {
        string time, nick;
        istringstream iss(line);
        iss >> time >> nick;

        // 개총 시작시간(포함)보다 일찍 들어온 사람을 dic 입력
        if (time <= s)
        {
            dic[nick] = time;
        }

        // 개총 종료시간과 스트리밍 종료시간 사이에 들어온 사람을 확인
        else if (e <= time && time <= q)
        {
            // 개총 시작시간보다 일찍 들어온 사람이라면 answer 입력
            if (dic.find(nick) != dic.end())
            {
                answer[nick] = 1;
            }
        }

        if(line == "")
        {
            break;
        }
    }

    cout << answer.size() << "\n";

    return 0;
}