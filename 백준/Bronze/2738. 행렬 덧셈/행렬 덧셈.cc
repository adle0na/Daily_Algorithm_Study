#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr1(n, vector<int>(m));
    vector<vector<int>> arr2(n, vector<int>(m));

    vector<vector<int>> resultArr(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}