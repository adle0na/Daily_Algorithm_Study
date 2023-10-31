#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string roomNumber = "";

int setCount;

int main()
{
    cin >> roomNumber;

    vector<vector<int>> allList(10);

    for (char c : roomNumber)
    {
        int digit = c - '0';
        
        allList[digit].push_back(digit);
    }

    vector<int> CountList;

    for (vector<int> List : allList)
    {
        CountList.push_back(List.size());
    }

    CountList[6] = (CountList[6] + CountList[9]) % 2 == 0 ? (CountList[6] + CountList[9]) / 2 : (CountList[6] + CountList[9]) / 2 + 1;
    CountList[9] = 0;

    sort(CountList.begin(), CountList.end());
    
    cout << CountList[CountList.size() - 1];
   
    return 0;
}