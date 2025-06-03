#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while (true)
    {
        int input;
        cin >> input;

        if (input == -1)
            break;

        vector<int> numList;
        int sum = 0;

        for (int i = 1; i < input; ++i)
        {
            if (input % i == 0)
            {
                numList.push_back(i);
                sum += i;
            }
        }

        if (sum == input)
        {
            cout << input << " = ";
            for (int i = 0; i < numList.size(); ++i)
            {
                cout << numList[i];
                if (i != numList.size() - 1)
                {
                    cout << " + ";
                }
            }
            cout << '\n';
        }
        else
        {
            cout << input << " is NOT perfect.\n";
        }
    }

    return 0;
}