#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    
    vector<int> CardList;
    
    for(int i = 0; i < 20; i++)
    {
        CardList.push_back(i + 1);
    }

    for(int i = 0; i < 10; i++)
    {
        cin >> a >> b;
    
        reverse(CardList.begin() + a - 1, CardList.begin() + b);
    }
    
    for(int i = 0; i < 20; i++)
    {
        cout << CardList[i] << " ";
    }

    return 0;
} 