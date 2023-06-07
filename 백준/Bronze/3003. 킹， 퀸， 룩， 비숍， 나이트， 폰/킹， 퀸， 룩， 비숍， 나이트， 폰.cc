#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> chessOriginal = { 1, 1, 2, 2, 2, 8 };

    vector<int> answer;

    int chessCount = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> chessCount;

        answer.push_back(chessOriginal[i] - chessCount);
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}
