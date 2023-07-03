#include <iostream>
#include <unordered_map>
#include <map>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, l;
    
    cin >> k >> l;

    map<string, string> groupMap;
    map<string, set<string>> memberMap;

    for(int i = 0; i < k; i++)
    {
        string groupName;

        int memberCount;

        cin >> groupName >> memberCount;

        for(int j = 0; j < memberCount; j++)
        {
            string memberName;
            
            cin >> memberName;

            // 그룹 맵의 멤버이름은 그룹네임과 페어
            groupMap[memberName] = groupName;

            // 멤버 맵의 그룹 이름엔 멤버 이름 삽입
            memberMap[groupName].insert(memberName);
        }
        
    }

    for(int i = 0; i < l; i++)
    {
        string q;

        int qType;

        cin >> q;
        
        cin >> qType;
        
        if(qType == 0)
        {
            for(const auto& member : memberMap[q])
                cout << member << "\n";
        }
        else
            cout << groupMap[q] << "\n";
    }

    return 0;
}
