#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr(9, vector<int>(9));

    int maxValue = 0;

    int maxN, maxM;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cin >> arr[i][j];

            if (arr[i][j] > maxValue)
            {
                maxValue = arr[i][j];

                maxN = i;
                maxM = j;
            }
        }
    }

    cout << maxValue << "\n";
    cout << maxN + 1 << " " << maxM + 1;

    return 0;
}