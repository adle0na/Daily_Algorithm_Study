#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    
    ios_base::sync_with_stdio(0);

    int N, M;
    
    cin >> N >> M;

    unordered_map<string, int> nameToNumber;  // 포켓몬 이름과 번호를 매칭하는 맵
    
    vector<string> numberToName(N);  // 번호에 해당하는 포켓몬 이름을 저장하는 벡터

    for (int i = 0; i < N; i++)
    {
        string name;
        
        cin >> name;
        
        nameToNumber[name] = i + 1;  // 포켓몬 이름과 번호를 매칭하여 저장
        numberToName[i] = name;  // 번호에 해당하는 포켓몬 이름 저장
    }

    for (int i = 0; i < M; i++)
    {
        string query;
        cin >> query;

        if (isdigit(query[0]))
        {  // 숫자인 경우
            int number = stoi(query);
            cout << numberToName[number - 1] << "\n";  // 번호에 해당하는 포켓몬 이름 출력
        }
        else
            cout << nameToNumber[query] << "\n";  // 이름에 해당하는 번호 출력
    }

    return 0;
}
