#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, l;
    
    cin >> k >> l;

    unordered_map<string, string> Account;
    
    for(int i = 0; i < k; i++)
    {
        string ID;
        string PW;
        
        cin >> ID >> PW;
        
        Account[ID] = PW;
    }

    for(int i = 0; i < l; i++)
    {
        string FindID;
        
        cin >> FindID;

        cout << Account[FindID] << "\n";
    }
    return 0;
}
