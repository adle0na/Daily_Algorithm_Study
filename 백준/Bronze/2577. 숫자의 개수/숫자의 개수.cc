#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int num;

    int sum = 1;

    string ssum;

    vector<int> answer(10);

    for (int i = 0; i < 3; i++)
    {
        cin >> num;

        sum *= num;
    }

    ssum = to_string(sum);

    for (int i = 0; i < ssum.size(); i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if ((ssum[i]) - '0' == j)
                answer[j]++;
        }
    }

   for (int i = 0; i <= 9; i++)
       cout << answer[i] << "\n";
}