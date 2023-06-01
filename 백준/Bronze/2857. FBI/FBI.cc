#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> agents;  // FBI 요원의 인덱스를 저장할 벡터

    for (int i = 0; i < 5; i++)
    {
        string name = "";

        getline(cin, name);  // 첩보원명 입력

        if (name.find("FBI") != string::npos) {
            agents.push_back(i + 1);  // FBI 요원 발견 시 인덱스 저장
        }
    }

    if (agents.empty())
    {
        cout << "HE GOT AWAY!" << endl;
    }
    else
    {
        for (int i = 0; i < agents.size(); i++)
        {
            cout << agents[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
