#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;

vector<int> numList;

int findValue;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a; 

        cin >> a;

        numList.push_back(a);
    }

    cin >> findValue;

    sort(numList.begin(), numList.end());

    int answer = 0;
    int Left  = 0;
    int Right = n - 1;

    while (Left < Right)
    {
        if (numList[Left] + numList[Right] == findValue)
        {
            answer += 1;
            Left += 1;
            Right -= 1;
        }
        else if (numList[Left] + numList[Right] > findValue)
        {
            Right -= 1;
        }
        else
        {
            Left += 1;
        }

    }

    cout << answer;
    return 0;
}